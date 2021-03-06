/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSFileManager.h"

@interface NSFileManager (NSFileManagerAdditions)
- (BOOL)canWriteToDirectoryAtPath:(id)fp8;	// IMP=0x30b99c39
- (BOOL)canWriteToFileAtPath:(id)fp8;	// IMP=0x30b99cb5
- (void)deleteFilesInArray:(id)fp8 fromDirectory:(id)fp12;	// IMP=0x30b99d31
- (void)deleteFilesInSortedArray:(id)fp8 matchingPrefix:(id)fp12 fromDirectory:(id)fp16;	// IMP=0x30b99f89
- (id)fileModificationDateAtPath:(id)fp8 traverseLink:(BOOL)fp12;	// IMP=0x30b9a041
- (long long)fileSizeAtPath:(id)fp8 traverseLink:(BOOL)fp12;	// IMP=0x30b9a09d
- (BOOL)makeCompletePath:(id)fp8 mode:(int)fp12;	// IMP=0x30b99c29
- (id)makeUniqueDirectoryWithPath:(id)fp8;	// IMP=0x30b99a75
- (id)makeUniqueFileInDirectory:(id)fp8;	// IMP=0x30b99955
- (id)pathsAtDirectory:(id)fp8 beginningWithString:(id)fp12;	// IMP=0x30b99ec5
- (id)rawDirectoryContentsAtPath:(id)fp8;	// IMP=0x30b99dc7
@end

