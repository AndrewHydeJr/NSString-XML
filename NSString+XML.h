//
//  NSString+XML.h
//  Created by Hyde, Andrew on 3/20/13.
//  A simple converter from a string containing XML to an NSDictionary, backed by NSXMLParser.
//  Will return nil if there has been an error.

/*
 
 #import "NSString+XML.h"
 
 ...
 
 NSString *XMLString = @"<test>data</test>";
 NSDictionary *XMLAsDictionary = [XMLString dictionaryFromXML];
 
*/

#import <Foundation/Foundation.h>

@interface NSString (XML)

-(NSDictionary *)dictionaryFromXML;

@end
