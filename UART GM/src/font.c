#include "font.h"
#include <inttypes.h>
/*
**  Font data for Comic Sans MS 17pt
*/

/* Character bitmaps for Comic Sans MS 17pt */
const uint8_t comicSansMS_17ptBitmaps[] =
{
	/* @0 '0' (12 pixels wide) */
	0xC0, 0x1F, 0x00, //       #######
	0xF0, 0xFF, 0x00, //     ############
	0x3C, 0xE0, 0x01, //   ####       ####
	0x0C, 0x80, 0x01, //   ##           ##
	0x06, 0x00, 0x03, //  ##             ##
	0x06, 0x00, 0x03, //  ##             ##
	0x06, 0x00, 0x03, //  ##             ##
	0x06, 0x00, 0x03, //  ##             ##
	0x0E, 0x80, 0x01, //  ###           ##
	0x1C, 0xE0, 0x01, //   ###        ####
	0xF8, 0xFF, 0x00, //    #############
	0xE0, 0x1F, 0x00, //      ########

	/* @36 '1' (6 pixels wide) */
	0x30, 0x00, 0x03, //     ##          ##
	0x18, 0x00, 0x03, //    ##           ##
	0xFE, 0xFF, 0x03, //  #################
	0xFE, 0xFF, 0x03, //  #################
	0x00, 0x00, 0x03, //                 ##
	0x00, 0x00, 0x03, //                 ##

	/* @54 '2' (10 pixels wide) */
	0x18, 0xE0, 0x03, //    ##        #####
	0x1C, 0xF0, 0x03, //   ###       ######
	0x0C, 0x38, 0x03, //   ##       ###  ##
	0x0E, 0x1C, 0x03, //  ###      ###   ##
	0x06, 0x0E, 0x03, //  ##      ###    ##
	0x06, 0x06, 0x03, //  ##      ##     ##
	0x06, 0x07, 0x03, //  ##     ###     ##
	0x8E, 0x03, 0x03, //  ###   ###      ##
	0xFC, 0x01, 0x03, //   #######       ##
	0x78, 0x00, 0x03, //    ####         ##

	/* @84 '3' (11 pixels wide) */
	0x00, 0xC0, 0x00, //               ##
	0x0C, 0xC0, 0x01, //   ##          ###
	0x0C, 0x80, 0x01, //   ##           ##
	0x0E, 0x00, 0x03, //  ###            ##
	0x06, 0x01, 0x03, //  ##     #       ##
	0x06, 0x03, 0x03, //  ##     ##      ##
	0x86, 0x03, 0x03, //  ##    ###      ##
	0x86, 0x03, 0x03, //  ##    ###      ##
	0xCC, 0x86, 0x01, //   ##  ## ##    ##
	0xFC, 0xFE, 0x00, //   ###### #######
	0x78, 0x7C, 0x00, //    ####   #####

	/* @117 '4' (13 pixels wide) */
	0x00, 0x18, 0x00, //            ##
	0x00, 0x1C, 0x00, //           ###
	0x00, 0x1F, 0x00, //         #####
	0x80, 0x1F, 0x00, //        ######
	0xE0, 0x19, 0x00, //      ####  ##
	0xF8, 0x18, 0x00, //    #####   ##
	0x3C, 0x18, 0x00, //   ####     ##
	0x0F, 0x18, 0x00, // ####       ##
	0xFF, 0xFF, 0x03, // ##################
	0xFF, 0xFF, 0x03, // ##################
	0x00, 0x18, 0x00, //            ##
	0x00, 0x18, 0x00, //            ##
	0x00, 0x18, 0x00, //            ##

	/* @156 '5' (11 pixels wide) */
	0xE6, 0xC7, 0x00, //  ##  ######   ##
	0xFE, 0xC7, 0x01, //  ##########   ###
	0xBE, 0x83, 0x03, //  ##### ###     ###
	0x86, 0x01, 0x03, //  ##    ##       ##
	0xC6, 0x00, 0x03, //  ##   ##        ##
	0xC6, 0x00, 0x03, //  ##   ##        ##
	0xC6, 0x00, 0x03, //  ##   ##        ##
	0xC6, 0x80, 0x01, //  ##   ##       ##
	0xC6, 0xC1, 0x01, //  ##   ###     ###
	0x86, 0xFF, 0x00, //  ##    #########
	0x00, 0x3E, 0x00, //          #####

	/* @189 '6' (11 pixels wide) */
	0x00, 0x7F, 0x00, //         #######
	0xC0, 0xFF, 0x00, //       ##########
	0xE0, 0xC3, 0x01, //      #####    ###
	0xB0, 0x81, 0x03, //     ## ##      ###
	0x98, 0x01, 0x03, //    ##  ##       ##
	0x8C, 0x01, 0x03, //   ##   ##       ##
	0x8E, 0x01, 0x03, //  ###   ##       ##
	0x86, 0x81, 0x03, //  ##    ##      ###
	0x00, 0xC3, 0x01, //         ##    ###
	0x00, 0xFF, 0x00, //         ########
	0x00, 0x7C, 0x00, //           #####

	/* @222 '7' (13 pixels wide) */
	0x06, 0x00, 0x00, //  ##
	0x06, 0x00, 0x00, //  ##
	0x06, 0x00, 0x02, //  ##              #
	0x06, 0xC0, 0x03, //  ##           ####
	0x06, 0xF0, 0x01, //  ##         #####
	0x06, 0x7E, 0x00, //  ##      ######
	0x86, 0x1F, 0x00, //  ##    ######
	0xC6, 0x07, 0x00, //  ##   #####
	0xF6, 0x01, 0x00, //  ## #####
	0x3E, 0x00, 0x00, //  #####
	0x1E, 0x00, 0x00, //  ####
	0x0E, 0x00, 0x00, //  ###
	0x06, 0x00, 0x00, //  ##

	/* @261 '8' (11 pixels wide) */
	0xF0, 0xF8, 0x00, //     ####   #####
	0xF8, 0xFD, 0x01, //    ###### #######
	0x8C, 0x8F, 0x01, //   ##   #####   ##
	0x86, 0x07, 0x03, //  ##    ####     ##
	0x06, 0x03, 0x03, //  ##     ##      ##
	0x06, 0x03, 0x03, //  ##     ##      ##
	0x06, 0x03, 0x03, //  ##     ##      ##
	0x86, 0x07, 0x03, //  ##    ####     ##
	0x8E, 0x8F, 0x01, //  ###   #####   ##
	0xFC, 0xFF, 0x01, //   ###############
	0xF8, 0xF8, 0x00, //    #####   #####

	/* @294 '9' (12 pixels wide) */
	0xF0, 0x01, 0x00, //     #####
	0xF8, 0x03, 0x06, //    #######       ##
	0x1C, 0x07, 0x06, //   ###   ###      ##
	0x0E, 0x0E, 0x07, //  ###     ###    ###
	0x06, 0x0C, 0x03, //  ##       ##    ##
	0x06, 0x8C, 0x03, //  ##       ##   ###
	0x06, 0x8C, 0x01, //  ##       ##   ##
	0x06, 0xCC, 0x01, //  ##       ##  ###
	0x0E, 0xF6, 0x00, //  ###     ## ####
	0x1C, 0x7E, 0x00, //   ###    ######
	0xF8, 0x1F, 0x00, //    ##########
	0xF0, 0x07, 0x00, //     #######

	/* @330 'a' (10 pixels wide) */
	0x00, 0xFC, 0x00, //           ######
	0x00, 0xFF, 0x01, //         #########
	0x80, 0x83, 0x03, //        ###     ###
	0x80, 0x01, 0x03, //        ##       ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x80, 0x03, //       ##       ###
	0xC0, 0xFF, 0x01, //       ###########
	0x80, 0xFF, 0x03, //        ###########
	0x00, 0x00, 0x03, //                 ##

	/* @360 'b' (11 pixels wide) */
	0xFF, 0xFF, 0x03, // ##################
	0xFF, 0xFF, 0x03, // ##################
	0x80, 0x81, 0x03, //        ##      ###
	0xC0, 0x01, 0x03, //       ###       ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x81, 0x03, //       ###      ###
	0x80, 0xC3, 0x01, //        ###    ###
	0x00, 0xFF, 0x00, //         ########
	0x00, 0x3E, 0x00, //          #####

	/* @393 'c' (10 pixels wide) */
	0x00, 0x78, 0x00, //            ####
	0x00, 0xFE, 0x01, //          ########
	0x80, 0x87, 0x01, //        ####    ##
	0x80, 0x01, 0x03, //        ##       ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0x80, 0x81, 0x01, //        ##      ##
	0x80, 0x81, 0x01, //        ##      ##

	/* @423 'd' (11 pixels wide) */
	0x00, 0x7C, 0x00, //           #####
	0x00, 0xFF, 0x00, //         ########
	0x80, 0xC3, 0x01, //        ###    ###
	0xC0, 0x81, 0x03, //       ###      ###
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0x80, 0x81, 0x01, //        ##      ##
	0xFF, 0xFF, 0x03, // ##################
	0xFF, 0xFF, 0x03, // ##################

	/* @456 'e' (11 pixels wide) */
	0x00, 0x7C, 0x00, //           #####
	0x00, 0xFF, 0x01, //         #########
	0x80, 0xB3, 0x01, //        ###  ## ##
	0xC0, 0x99, 0x03, //       ###  ##  ###
	0xC0, 0x18, 0x03, //       ##   ##   ##
	0xC0, 0x0C, 0x03, //       ##  ##    ##
	0xC0, 0x0C, 0x03, //       ##  ##    ##
	0xC0, 0x0E, 0x03, //       ## ###    ##
	0x80, 0x87, 0x01, //        ####    ##
	0x80, 0xC3, 0x01, //        ###    ###
	0x00, 0xC0, 0x00, //               ##

	/* @489 'f' (9 pixels wide) */
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xF8, 0xFF, 0x07, //    ################
	0xFE, 0xFF, 0x07, //  ##################
	0xCF, 0x00, 0x00, // ####  ##
	0xC3, 0x00, 0x00, // ##    ##
	0xC3, 0x00, 0x00, // ##    ##
	0xC3, 0x00, 0x00, // ##    ##

	/* @516 'g' (10 pixels wide) */
	0x00, 0x7C, 0x40, //           #####       #
	0x00, 0xFF, 0xC1, //         #########     ##
	0x80, 0x83, 0xC3, //        ###     ###    ##
	0x80, 0x01, 0xC3, //        ##       ##    ##
	0xC0, 0x00, 0xC3, //       ##        ##    ##
	0xC0, 0x00, 0xC3, //       ##        ##    ##
	0xC0, 0x80, 0xE1, //       ##       ##    ###
	0xC0, 0xE0, 0x78, //       ##     ###   ####
	0x80, 0xFF, 0x3F, //        ###############
	0x80, 0xFF, 0x07, //        ############

	/* @546 'h' (9 pixels wide) */
	0xFF, 0xFF, 0x03, // ##################
	0xFF, 0xFF, 0x03, // ##################
	0x00, 0x07, 0x00, //         ###
	0x80, 0x01, 0x00, //        ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0xFF, 0x03, //       ############
	0x80, 0xFF, 0x03, //        ###########

	/* @573 'i' (2 pixels wide) */
	0xC6, 0xFF, 0x03, //  ##   ############
	0xC6, 0xFF, 0x03, //  ##   ############

	/* @579 'j' (7 pixels wide) */
	0x00, 0x00, 0x30, //                     ##
	0x00, 0x00, 0xF0, //                     ####
	0x00, 0x00, 0xC0, //                       ##
	0x00, 0x00, 0x80, //                        #
	0x00, 0x00, 0x80, //                        #
	0xCC, 0xFF, 0xFF, //   ##  ##################
	0xCC, 0xFF, 0x7F, //   ##  #################

	/* @600 'k' (10 pixels wide) */
	0xFE, 0xFF, 0x03, //  #################
	0xFE, 0xFF, 0x03, //  #################
	0x00, 0x38, 0x00, //            ###
	0x00, 0x1C, 0x00, //           ###
	0x00, 0x3E, 0x00, //          #####
	0x00, 0x7F, 0x00, //         #######
	0x00, 0xE7, 0x00, //         ###  ###
	0x80, 0xC3, 0x01, //        ###    ###
	0xC0, 0x81, 0x03, //       ###      ###
	0x80, 0x00, 0x01, //        #        #

	/* @630 'l' (2 pixels wide) */
	0xFF, 0xFF, 0x03, // ##################
	0xFF, 0xFF, 0x03, // ##################

	/* @636 'm' (15 pixels wide) */
	0xC0, 0xFF, 0x03, //       ############
	0xC0, 0xFF, 0x03, //       ############
	0x00, 0x07, 0x00, //         ###
	0x80, 0x03, 0x00, //        ###
	0x80, 0x01, 0x00, //        ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0xFF, 0x03, //       ############
	0x00, 0xFF, 0x03, //         ##########
	0x80, 0x01, 0x00, //        ##
	0xC0, 0x01, 0x00, //       ###
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0xFF, 0x03, //       ############
	0x80, 0xFF, 0x03, //        ###########

	/* @681 'n' (9 pixels wide) */
	0xC0, 0xFF, 0x03, //       ############
	0xC0, 0xFF, 0x03, //       ############
	0x00, 0x0F, 0x00, //         ####
	0x80, 0x03, 0x00, //        ###
	0xC0, 0x01, 0x00, //       ###
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0xFF, 0x03, //       ############
	0x00, 0xFF, 0x03, //         ##########

	/* @708 'o' (10 pixels wide) */
	0x00, 0x7C, 0x00, //           #####
	0x00, 0xFF, 0x01, //         #########
	0x80, 0x83, 0x01, //        ###     ##
	0xC0, 0x01, 0x03, //       ###       ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x80, 0x03, //       ##       ###
	0xC0, 0xC1, 0x01, //       ###     ###
	0x80, 0xFF, 0x00, //        #########
	0x00, 0x7E, 0x00, //          ######

	/* @738 'p' (9 pixels wide) */
	0xE0, 0xFF, 0xFF, //      ###################
	0xE0, 0xFF, 0xFF, //      ###################
	0x80, 0x01, 0x03, //        ##       ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x81, 0x01, //       ###      ##
	0x80, 0xFF, 0x01, //        ##########
	0x00, 0x7E, 0x00, //          ######

	/* @765 'r' (9 pixels wide) */
	0xC0, 0xFF, 0x03, //       ############
	0xC0, 0xFF, 0x03, //       ############
	0x00, 0x03, 0x00, //         ##
	0x80, 0x01, 0x00, //        ##
	0xC0, 0x01, 0x00, //       ###
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x07, 0x00, //       #####
	0x80, 0x07, 0x00, //        ####

	/* @792 's' (9 pixels wide) */
	0x00, 0x8E, 0x01, //          ###   ##
	0x00, 0x8F, 0x03, //         ####   ###
	0x80, 0x1F, 0x03, //        ######   ##
	0x80, 0x19, 0x03, //        ##  ##   ##
	0x80, 0x19, 0x03, //        ##  ##   ##
	0x80, 0x18, 0x03, //        #   ##   ##
	0xC0, 0x38, 0x03, //       ##   ###  ##
	0xC0, 0xF3, 0x01, //       ####  #####
	0xC0, 0xE3, 0x00, //       ####   ###

	/* @819 't' (10 pixels wide) */
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xFC, 0xFF, 0x03, //   ################
	0xFC, 0xFF, 0x03, //   ################
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##
	0xC0, 0x00, 0x00, //       ##

	/* @849 'u' (9 pixels wide) */
	0xC0, 0xFF, 0x01, //       ###########
	0xC0, 0xFF, 0x03, //       ############
	0x00, 0x00, 0x03, //                 ##
	0x00, 0x00, 0x03, //                 ##
	0x00, 0x00, 0x03, //                 ##
	0x00, 0x00, 0x03, //                 ##
	0x00, 0x00, 0x01, //                 #
	0xC0, 0xFF, 0x03, //       ############
	0xC0, 0xFF, 0x03, //       ############

	/* @876 'w' (14 pixels wide) */
	0xC0, 0x03, 0x00, //       ####
	0xC0, 0x7F, 0x00, //       #########
	0x00, 0xFC, 0x03, //           ########
	0x00, 0x80, 0x03, //                ###
	0x00, 0xF0, 0x01, //             #####
	0x00, 0x3F, 0x00, //         ######
	0xC0, 0x07, 0x00, //       #####
	0xC0, 0x0F, 0x00, //       ######
	0x00, 0x7E, 0x00, //          ######
	0x00, 0xF0, 0x03, //             ######
	0x00, 0x80, 0x03, //                ###
	0x00, 0xFC, 0x03, //           ########
	0xC0, 0x7F, 0x00, //       #########
	0xC0, 0x03, 0x00, //       ####

	/* @918 'x' (12 pixels wide) */
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x81, 0x03, //       ###      ###
	0x80, 0xC3, 0x01, //        ###    ###
	0x00, 0xE7, 0x00, //         ###  ###
	0x00, 0x7E, 0x00, //          ######
	0x00, 0x3C, 0x00, //           ####
	0x00, 0x3C, 0x00, //           ####
	0x00, 0x7E, 0x00, //          ######
	0x00, 0xE7, 0x00, //         ###  ###
	0x80, 0xC3, 0x01, //        ###    ###
	0xC0, 0x81, 0x03, //       ###      ###
	0xC0, 0x00, 0x03, //       ##        ##

	/* @954 'y' (12 pixels wide) */
	0xC0, 0x01, 0x00, //       ###
	0xC0, 0x07, 0x00, //       #####
	0x00, 0x0F, 0xC0, //         ####          ##
	0x00, 0x3C, 0xF0, //           ####      ####
	0x00, 0xF0, 0x3C, //             ####  ####
	0x00, 0xC0, 0x0F, //               ######
	0x00, 0xE0, 0x01, //              ####
	0x00, 0x78, 0x00, //            ####
	0x00, 0x1E, 0x00, //          ####
	0x80, 0x07, 0x00, //        ####
	0xC0, 0x01, 0x00, //       ###
	0xC0, 0x00, 0x00, //       ##

	/* @990 'z' (10 pixels wide) */
	0xC0, 0x00, 0x03, //       ##        ##
	0xC0, 0x80, 0x03, //       ##       ###
	0xC0, 0xC0, 0x03, //       ##      ####
	0xC0, 0xE0, 0x03, //       ##     #####
	0xC0, 0x78, 0x03, //       ##   #### ##
	0xC0, 0x1C, 0x03, //       ##  ###   ##
	0xC0, 0x0F, 0x03, //       ######    ##
	0xC0, 0x07, 0x03, //       #####     ##
	0xC0, 0x01, 0x03, //       ###       ##
	0xC0, 0x00, 0x03, //       ##        ##
};

/* Character descriptors for Comic Sans MS 17pt */
/* { [Char width in bits], [Offset into comicSansMS_17ptCharBitmaps in bytes] } */
const FONT_CHAR_INFO comicSansMS_17ptDescriptors[] =
{
	{12, 0}, 		/* 0 */
	{6, 36}, 		/* 1 */
	{10, 54}, 		/* 2 */
	{11, 84}, 		/* 3 */
	{13, 117}, 		/* 4 */
	{11, 156}, 		/* 5 */
	{11, 189}, 		/* 6 */
	{13, 222}, 		/* 7 */
	{11, 261}, 		/* 8 */
	{12, 294}, 		/* 9 */
	{0, 0}, 		/* : */
	{0, 0}, 		/* ; */
	{0, 0}, 		/* < */
	{0, 0}, 		/* = */
	{0, 0}, 		/* > */
	{0, 0}, 		/* ? */
	{0, 0}, 		/* @ */
	{0, 0}, 		/* A */
	{0, 0}, 		/* B */
	{0, 0}, 		/* C */
	{0, 0}, 		/* D */
	{0, 0}, 		/* E */
	{0, 0}, 		/* F */
	{0, 0}, 		/* G */
	{0, 0}, 		/* H */
	{0, 0}, 		/* I */
	{0, 0}, 		/* J */
	{0, 0}, 		/* K */
	{0, 0}, 		/* L */
	{0, 0}, 		/* M */
	{0, 0}, 		/* N */
	{0, 0}, 		/* O */
	{0, 0}, 		/* P */
	{0, 0}, 		/* Q */
	{0, 0}, 		/* R */
	{0, 0}, 		/* S */
	{0, 0}, 		/* T */
	{0, 0}, 		/* U */
	{0, 0}, 		/* V */
	{0, 0}, 		/* W */
	{0, 0}, 		/* X */
	{0, 0}, 		/* Y */
	{0, 0}, 		/* Z */
	{0, 0}, 		/* [ */
	{0, 0}, 		/* \ */
	{0, 0}, 		/* ] */
	{0, 0}, 		/* ^ */
	{0, 0}, 		/* _ */
	{0, 0}, 		/* ` */
	{10, 330}, 		/* a */
	{11, 360}, 		/* b */
	{10, 393}, 		/* c */
	{11, 423}, 		/* d */
	{11, 456}, 		/* e */
	{9, 489}, 		/* f */
	{10, 516}, 		/* g */
	{9, 546}, 		/* h */
	{2, 573}, 		/* i */
	{7, 579}, 		/* j */
	{10, 600}, 		/* k */
	{2, 630}, 		/* l */
	{15, 636}, 		/* m */
	{9, 681}, 		/* n */
	{10, 708}, 		/* o */
	{9, 738}, 		/* p */
	{0, 0}, 		/* q */
	{9, 765}, 		/* r */
	{9, 792}, 		/* s */
	{10, 819}, 		/* t */
	{9, 849}, 		/* u */
	{0, 0}, 		/* v */
	{14, 876}, 		/* w */
	{12, 918}, 		/* x */
	{12, 954}, 		/* y */
	{10, 990}, 		/* z */
};

/* Font information for Comic Sans MS 17pt */
const FONT_INFO comicSansMS_17ptFontInfo =
{
	3, /*  Character height */
	'0', /*  Start character */
	'z', /*  End character */
	2, /*  Width, in pixels, of space character */
	comicSansMS_17ptDescriptors, /*  Character descriptor array */
	comicSansMS_17ptBitmaps, /*  Character bitmap array */
};
