/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableSet : NSSet  {
}

+ (id)setWithCapacity:(unsigned int)arg1;
+ (id)nonRetainingSet;

- (void)minusOrderedSet:(id)arg1;
- (void)setObject:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)setArray:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)intersectOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)_mutate;
- (void)addObjectsFromArray:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)addObject:(id)arg1;
- (Class)classForCoder;
- (void)filterUsingPredicate:(id)arg1;
- (void)pl_addObjectIfNotNil:(id)arg1;
- (id)mf_uniquedObject:(id)arg1;
- (void)CDVAddItemParserMappingWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3;
- (void)addMessageEntry:(id)arg1;

@end