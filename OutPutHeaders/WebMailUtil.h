/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface WebMailUtil : MMObject {
}
+(id)getWebMailTitle:(id)title MaxWidth:(float)width withAddress:(id)address;
+(id)getWebMailTitle:(id)title LandscapeMode:(BOOL)mode MaxWidth:(float)width withAddress:(id)address;
+(id)SystemConvertMailNode2HTMLContent:(id)content withImgIndex:(int)imgIndex;
+(id)MailcompressImage:(id)image;
+(id)SystemConvertMailNodeList2HTMLContent:(id)content;
+(id)ConvertMailNode2HTMLContent:(id)content;
+(id)GetHtmlImageMessage:(id)message;
+(id)ConvertMailNodeList2HTMLContent:(id)content;
@end

