/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsLeague : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *diplayedText;
@property (nonatomic, copy) NSNumber *displayTeamLocationOverName;
@property (nonatomic, copy) NSString *displayedText;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) SASportsSeason *season;
@property (nonatomic, copy) NSString *sport;
@property (readonly) Class superclass;

+ (id)league;
+ (id)leagueWithDictionary:(id)arg1 context:(id)arg2;

- (id)diplayedText;
- (id)displayTeamLocationOverName;
- (id)displayedText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)season;
- (void)setDiplayedText:(id)arg1;
- (void)setDisplayTeamLocationOverName:(id)arg1;
- (void)setDisplayedText:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSeason:(id)arg1;
- (void)setSport:(id)arg1;
- (id)sport;

@end