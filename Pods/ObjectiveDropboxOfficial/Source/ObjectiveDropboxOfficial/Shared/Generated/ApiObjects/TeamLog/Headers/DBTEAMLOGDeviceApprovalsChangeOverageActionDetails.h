///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceApprovalsChangeOverageActionDetails;
@class DBTEAMLOGDeviceApprovalsRolloutPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceApprovalsChangeOverageActionDetails` struct.
///
/// Changed the action taken when a team member is already over the limits (e.g
/// when they join the team, an admin lowers limits, etc.).
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceApprovalsChangeOverageActionDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New over the limits policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGDeviceApprovalsRolloutPolicy *dNewValue;

/// Previous over the limit policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGDeviceApprovalsRolloutPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New over the limits policy. Might be missing due to
/// historical data gap.
/// @param previousValue Previous over the limit policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(nullable DBTEAMLOGDeviceApprovalsRolloutPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGDeviceApprovalsRolloutPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeviceApprovalsChangeOverageActionDetails`
/// struct.
///
@interface DBTEAMLOGDeviceApprovalsChangeOverageActionDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceApprovalsChangeOverageActionDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDeviceApprovalsChangeOverageActionDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceApprovalsChangeOverageActionDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGDeviceApprovalsChangeOverageActionDetails *)instance;

///
/// Deserializes `DBTEAMLOGDeviceApprovalsChangeOverageActionDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceApprovalsChangeOverageActionDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGDeviceApprovalsChangeOverageActionDetails` object.
///
+ (DBTEAMLOGDeviceApprovalsChangeOverageActionDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
