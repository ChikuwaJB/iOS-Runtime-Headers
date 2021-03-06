/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIContactPropertyIDSHandle : NSObject <CNUIIDSHandle> {
    CNContactProperty * _contactProperty;
    NSString * _idsID;
}

@property (nonatomic, readonly, copy) NSString *_cnui_IDSIDRepresentation;
@property (nonatomic, readonly, copy) CNContactProperty *contactProperty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *idsID;
@property (readonly) Class superclass;

+ (id)idsIDForEmail:(id)arg1;
+ (id)idsIDForPhoneNumber:(id)arg1;

- (void).cxx_destruct;
- (id)_cnui_IDSIDRepresentation;
- (id)contactProperty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)idsID;
- (id)initWithContactProperty:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
