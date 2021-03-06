///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESFileOpsResult.h"
#import "DBSerializableProtocol.h"

@class DBFILESRelocationBatchResult;
@class DBFILESRelocationBatchResultData;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocationBatchResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRelocationBatchResult : DBFILESFileOpsResult <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) NSArray<DBFILESRelocationBatchResultData *> *entries;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param entries (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBFILESRelocationBatchResultData *> *)entries;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RelocationBatchResult` struct.
///
@interface DBFILESRelocationBatchResultSerializer : NSObject

///
/// Serializes `DBFILESRelocationBatchResult` instances.
///
/// @param instance An instance of the `DBFILESRelocationBatchResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchResult` API object.
///
+ (NSDictionary *)serialize:(DBFILESRelocationBatchResult *)instance;

///
/// Deserializes `DBFILESRelocationBatchResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchResult` API object.
///
/// @return An instantiation of the `DBFILESRelocationBatchResult` object.
///
+ (DBFILESRelocationBatchResult *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
