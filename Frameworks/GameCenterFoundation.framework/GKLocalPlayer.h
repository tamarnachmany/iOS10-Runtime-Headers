/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate, UIViewController, GKSignInViewController, GKEventEmitter, UIAlertView, NSDictionary, NSString, NSInvocation, GKInvite, NSArray;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding> {
    BOOL _authenticated;
    BOOL _authenticating;
    BOOL _didAuthenticate;
    BOOL _validatingAccount;
    BOOL _enteringForeground;
    BOOL _appUnrecognized;
    BOOL _newToGameCenter;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _authenticateHandler;

    GKInvite *_acceptedInvite;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _authenticationCompletionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _validateAccountCompletionHandler;

    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSString *_lastUsernameAttempted;
    NSString *_lastAccountNameAuthenticated;
    NSInvocation *_currentFriendRequestInvocation;
    unsigned int _failedLogins;
    NSArray *_friendRequests;
    NSDictionary *_authenticateAlertDictionary;
    int _environment;
    NSString *_lastAuthPlayerID;
    NSDate *_lastAuthDate;
    UIViewController *_rootViewController;
    UIViewController *_activeViewController;
    GKEventEmitter *_eventEmitter;
    GKSignInViewController *_signInViewController;
}

@property(getter=isAuthenticated) BOOL authenticated;
@property(getter=isUnderage,readonly) BOOL underage;
@property(copy) id authenticateHandler;
@property(readonly) NSArray * friends;
@property(getter=isAuthenticating) BOOL authenticating;
@property(retain) NSString * accountName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) GKInvite * acceptedInvite;
@property(readonly) BOOL canChangePhoto;
@property(retain) NSArray * friendRequests;
@property(retain) NSString * lastUsernameAttempted;
@property(retain) NSString * lastAccountNameAuthenticated;
@property(getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property(getter=isAppUnrecognized) BOOL appUnrecognized;
@property(readonly) int environment;
@property(readonly) BOOL allowNearbyMultiplayer;
@property(getter=isNewToGameCenter) BOOL newToGameCenter;
@property(readonly) NSString * facebookUserID;
@property(readonly) NSString * iCloudUserID;
@property(getter=isFindable,readonly) BOOL findable;
@property(retain) GKEventEmitter * eventEmitter;
@property(copy) id authenticationCompletionHandler;
@property(copy) id validateAccountCompletionHandler;
@property(retain) UIAlertView * loginAlertView;
@property UIAlertView * currentAlert;
@property(retain) NSInvocation * currentFriendRequestInvocation;
@property(retain) NSString * lastAuthPlayerID;
@property(retain) NSDate * lastAuthDate;
@property BOOL didAuthenticate;
@property BOOL validatingAccount;
@property BOOL enteringForeground;
@property unsigned int failedLogins;
@property(retain) UIViewController * rootViewController;
@property(retain) UIViewController * activeViewController;
@property(retain) GKSignInViewController * signInViewController;
@property(retain) NSDictionary * authenticateAlertDictionary;

+ (id)localPlayer;
+ (BOOL)supportsSecureCoding;
+ (id)accountName;
+ (BOOL)hasAuthenticatedAccount;

- (id)loginAlertView;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (id)currentFriendRequestInvocation;
- (void)setAuthenticateHandler:(id)arg1;
- (BOOL)didAuthenticate;
- (void)setLastAuthDate:(id)arg1;
- (void)setupMultiplayerNotifications;
- (void)setAuthenticateAlertDictionary:(id)arg1;
- (void)setEnteringForeground:(BOOL)arg1;
- (void)setValidateAccountCompletionHandler:(id)arg1;
- (id)validateAccountCompletionHandler;
- (BOOL)validatingAccount;
- (void)setLoginAlertView:(id)arg1;
- (void)setCurrentAlert:(id)arg1;
- (id)currentAlert;
- (void)setSignInViewController:(id)arg1;
- (id)activeViewController;
- (void)setActiveViewController:(id)arg1;
- (id)signInViewController;
- (void)setLastAuthPlayerID:(id)arg1;
- (void)setValidatingAccount:(BOOL)arg1;
- (void)setAuthenticating:(BOOL)arg1;
- (void)setDidAuthenticate:(BOOL)arg1;
- (BOOL)enteringForeground;
- (id)authenticateHandler;
- (BOOL)isNewToGameCenter;
- (id)lastAuthPlayerID;
- (id)lastAuthDate;
- (void)setNewToGameCenter:(BOOL)arg1;
- (id)acceptedInvite;
- (void)loadFriendRecommendationsWithCompletionHandler:(id)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (id)eventEmitter;
- (void)setAppUnrecognized:(BOOL)arg1;
- (BOOL)isAppUnrecognized;
- (id)authenticateAlertDictionary;
- (void)setFailedLogins:(unsigned int)arg1;
- (unsigned int)failedLogins;
- (void)setLastAccountNameAuthenticated:(id)arg1;
- (id)lastAccountNameAuthenticated;
- (void)setLastUsernameAttempted:(id)arg1;
- (id)lastUsernameAttempted;
- (void)setAuthenticationCompletionHandler:(id)arg1;
- (id)authenticationCompletionHandler;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id)arg1;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id)arg2;
- (BOOL)hasEmailAddress:(id)arg1;
- (void)addFriendRequest:(id)arg1;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)removeFriendRequestForPlayerID:(id)arg1;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(id)arg8;
- (void)loadFriendRequests:(id)arg1;
- (void)addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)showSettings;
- (BOOL)canChangePhoto;
- (void)loadGameRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (void)updateFromLocalPlayer:(id)arg1;
- (id)displayNameWithIdentifiableName:(BOOL)arg1 quoteAlias:(BOOL)arg2;
- (void)setAcceptedInvite:(id)arg1;
- (void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(id)arg2;
- (id)friendRequestForPlayerID:(id)arg1;
- (id)friendRequests;
- (void)setFriendRequests:(id)arg1;
- (void)_addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadProfileWithCompletionHandler:(id)arg1;
- (id)friends;
- (BOOL)isAuthenticating;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)daemonFetchTurnBasedEvent:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)setEventEmitter:(id)arg1;
- (void)reset:(id)arg1;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (BOOL)isAuthenticated;
- (void)setStatus:(id)arg1;
- (int)environment;
- (id)init;
- (void)dealloc;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1 withFont:(id)arg2;
- (void)setPhoto:(id)arg1 withCompletionHandler:(id)arg2;
- (void)deletePhoto;
- (void)signOutWithCompletionHandler:(id)arg1;
- (void)showAuthenticateForInGameNavController:(id)arg1 popOnAuthenticate:(BOOL)arg2 completionHandler:(id)arg3;
- (void)showChangePasswordViewController;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (void)showAccountControllerForMode:(int)arg1;
- (void)showViewController:(id)arg1 wrapInNavController:(BOOL)arg2;
- (void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(id)arg2;
- (void)presentError:(id)arg1 forMode:(int)arg2;
- (BOOL)shouldReuseControllerForMode:(int)arg1;
- (void)showAuthenticateViewController;
- (void)showAuthorizeViewController;
- (void)cancelAuthentication;
- (void)handleUnderlyingErrorForAuthenticateError:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)validateAccountWithCompletionHandler:(id)arg1;
- (void)_authenticateWithCompletionHandler:(id)arg1;
- (void)_authenticate;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)alertUserInStoreDemoModeEnabled;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (void)showSignInAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showCreateAccountRestrictedAlert;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end