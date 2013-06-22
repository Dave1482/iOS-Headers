/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UserFSVolume-Protocol.h"

@class ExFATFile, ExFATFolder, NSString, UserFSBufferCache;

@interface ExFATVolume : NSObject <UserFSVolume>
{
    int _fd;
    int _dirty;
    UserFSBufferCache *_bufferCache;
    BOOL _locked;
    NSString *_deviceName;
    unsigned int _dev_block_size;
    unsigned int _bytesPerSectorShift;
    unsigned int _bytesPerClusterShift;
    unsigned int _maxCluster;
    unsigned int _rootCluster;
    unsigned int _rootNumClusters;
    unsigned long _dirBlockSize;
    unsigned short *_upcase;
    ExFATFile *_bitmap;
    ExFATFolder *__cachedRootDir;
    unsigned long long _fatOffset;
    unsigned long long _fatSize;
    unsigned long long _clusterOffset;
}

@property(nonatomic) __weak ExFATFolder *_cachedRootDir; // @synthesize _cachedRootDir=__cachedRootDir;
@property(retain, nonatomic) ExFATFile *bitmap; // @synthesize bitmap=_bitmap;
@property(nonatomic) unsigned short *upcase; // @synthesize upcase=_upcase;
@property(readonly, nonatomic) unsigned long dirBlockSize; // @synthesize dirBlockSize=_dirBlockSize;
@property(nonatomic) unsigned long long clusterOffset; // @synthesize clusterOffset=_clusterOffset;
@property(nonatomic) unsigned long long fatSize; // @synthesize fatSize=_fatSize;
@property(nonatomic) unsigned long long fatOffset; // @synthesize fatOffset=_fatOffset;
@property(nonatomic) unsigned int rootNumClusters; // @synthesize rootNumClusters=_rootNumClusters;
@property(nonatomic) unsigned int rootCluster; // @synthesize rootCluster=_rootCluster;
@property(nonatomic) unsigned int maxCluster; // @synthesize maxCluster=_maxCluster;
@property(nonatomic) unsigned int bytesPerClusterShift; // @synthesize bytesPerClusterShift=_bytesPerClusterShift;
@property(nonatomic) unsigned int bytesPerSectorShift; // @synthesize bytesPerSectorShift=_bytesPerSectorShift;
@property(nonatomic) unsigned int dev_block_size; // @synthesize dev_block_size=_dev_block_size;
@property(nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)close;
- (BOOL)flush;
- (BOOL)deleteFiles:(id)arg1;
- (id)itemAtPath:(id)arg1;
- (id)rootDirectory;
- (id)rootDir;
- (BOOL)freeChainAt:(unsigned int)arg1;
- (BOOL)freeExtentAt:(unsigned int)arg1 count:(unsigned int)arg2;
- (BOOL)readUpcaseTable:(struct exfat_direntry_upcase *)arg1;
- (int)setDirty:(BOOL)arg1;
- (id)initWithDeviceName:(id)arg1;
- (unsigned int)contiguousClustersInChain:(unsigned int)arg1 nextCluster:(unsigned int *)arg2;
- (unsigned long long)physicalOffsetForCluster:(unsigned int)arg1;
- (void)releaseBuffer:(id)arg1;
- (id)getBufferAtOffset:(unsigned long long)arg1 ofLength:(unsigned long)arg2 error:(int *)arg3;
- (long)writeBytes:(void *)arg1 ofLength:(unsigned long)arg2 atOffset:(unsigned long long)arg3;
- (long)readBytes:(void *)arg1 ofLength:(unsigned long)arg2 atOffset:(unsigned long long)arg3;

@end
