/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContactBuffersDecoder : NSObject {
    NSMutableArray * _contactsWaitingForUnification;
    CNContactBufferDecoder * _decoder;
    CNContactFetchRequest * _fetchRequest;
}

@property (nonatomic, readonly) NSMutableArray *contactsWaitingForUnification;
@property (nonatomic, readonly) CNContactBufferDecoder *decoder;
@property (nonatomic, readonly) CNContactFetchRequest *fetchRequest;

- (void).cxx_destruct;
- (id)contactsFromData:(id)arg1 moreComing:(bool)arg2 error:(id*)arg3;
- (id)contactsWaitingForUnification;
- (id)decoder;
- (id)fetchRequest;
- (id)init;
- (id)initWithFetchRequest:(id)arg1;
- (id)unifyContacts:(id)arg1 moreComing:(bool)arg2;

@end