/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/libmecabra.dylib
 */

@class NSDictionary, NSString, NSArray;

@interface CharacterInformationRepository : NSObject  {
    struct __IDXIndex { } *_characterInfoDictionary;
    NSString *_currentCharacter;
    NSArray *_currentCharacterInfo;
    int _language;
}

@property(retain) NSString * currentCharacter;
@property(readonly) NSDictionary * informationDictionary;
@property int language;
@property struct __IDXIndex { }* characterInfoDictionary;
@property(retain) NSArray * currentCharacterInfo;

+ (id)sharedCharacterInformationRepository;

- (id)currentCharacter;
- (void)setCharacterInfoDictionary:(struct __IDXIndex { }*)arg1;
- (id)informationStringAtSlot:(int)arg1;
- (id)currentCharacterInfo;
- (void)setCurrentCharacterInfo:(id)arg1;
- (id)searchResultsForCharacter:(id)arg1;
- (struct __IDXIndex { }*)characterInfoDictionary;
- (id)informationDictionary;
- (void)setCurrentCharacter:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setLanguage:(int)arg1;
- (int)language;

@end