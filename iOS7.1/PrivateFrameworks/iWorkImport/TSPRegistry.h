//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSPRegistry : NSObject
{
    struct hash_map<unsigned int, const google::protobuf::Message *, __gnu_cxx::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const google::protobuf::Message *>>> _messageTypeToPrototypeMap;
    struct hash_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::__1::equal_to<const google::protobuf::Descriptor *>, std::__1::allocator<std::__1::pair<const google::protobuf::Descriptor *const, unsigned int>>> _descriptorToMessageTypeMap;
    struct hash_map<unsigned int, const char *, __gnu_cxx::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const char *>>> _messageTypeToClassnameMap;
    struct hash_map<unsigned int, __unsafe_unretained Class *, __gnu_cxx::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __unsafe_unretained Class *>>> _messageTypeToClassMap;
}

+ (void)setInitializationHandler:(CDUnknownBlockType)arg1;
+ (id)sharedRegistry;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 descriptor:(const struct Descriptor *)arg3;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 unarchiveClass:(Class)arg3;
- (void)setUpgradeMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 unarchiveClassname:(const char *)arg3;
- (void)setOverrideMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 descriptor:(const struct Descriptor *)arg3 unarchiveClassname:(const char *)arg4;
- (void)setMessageType:(unsigned int)arg1 messagePrototype:(const struct Message *)arg2 descriptor:(const struct Descriptor *)arg3 unarchiveClassname:(const char *)arg4;
- (void)resetForMessageType:(unsigned int)arg1 descriptor:(const struct Descriptor *)arg2;
- (Class)unarchiveClassForMessageType:(unsigned int)arg1;
- (unsigned int)messageTypeForDescriptor:(const struct Descriptor *)arg1;
- (const struct Message *)messagePrototypeForMessageType:(unsigned int)arg1;
- (void)registerPersistenceMessages;
- (id)init;

@end

