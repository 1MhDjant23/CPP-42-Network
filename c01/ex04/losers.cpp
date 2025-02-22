/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 19:44:25 by mait-taj          #+#    #+#             */
/*   Updated: 2025/02/22 15:51:43 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

void	search_and_replace( std::ifstream& inFile, const std::string& filename,
	const std::string& strToFind, const std::string& strToReplace )
{
	std::string		_outFile;
	std::string		_readLine;
	std::string		_temp;
	std::ofstream	outStream;

	_outFile = filename + ".replace";
	outStream.open( _outFile, std::ios::out );
	
	while ( std::getline( inFile,  _readLine ) )
	{
		std::string		_newLine;
		for ( std::size_t i = 0; i < _readLine.size(); i++ )
		{
			_temp = _readLine.substr( i, strToFind.size() );
			if ( _temp == strToFind )
			{
				_newLine += strToReplace;
				i += strToFind.size() - 1;
			}
			else
				_newLine += _readLine[i];
		}
		outStream << _newLine << std::endl;
	}
}
