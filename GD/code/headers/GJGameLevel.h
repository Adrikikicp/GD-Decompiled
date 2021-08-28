#include "includes.h"

class GJGameLevel : public cocos2d::CCNode
{
public:
	cocos2d::CCDictionary* m_pRecentlyBrowsedPages;
	int m_nLevelIDSeed;
	int m_nLevelIDRand;
	int m_nLevelID;
	std::string m_sLevelName;
	std::string m_sDescription;
	std::string m_sLevelString;
	std::string m_sCreator;
	std::string m_sReplayData;
	std::string m_sUploadDate;
	std::string m_sUpdateDate;
	int m_nUserIDSeed;
	int m_nUserIDRand;
	int m_nUserID;
	int m_nAccountIDSeed;
	int m_nAccountIDRand;
	int m_nAccountID;
	int m_nDifficulty;
	int m_nSongIndex;
	int m_nSongID;
	int m_nRevision;
	bool m_bIsUnlisted;
	char field_141;
	char field_142;
	char field_143;
	int m_nObjectCountSeed;
	int m_nObjectCountRand;
	int m_nObjectCount;
	int m_nLevelOrder;
	int m_nRatings;
	int m_nRatingsSum;
	int m_nDownloads;
	bool m_bIsEditable;
	bool m_bIsGauntlet;
	bool m_bIsFreeGame;
	char field_163;
	int m_nEditorTimeLocal;
	int m_nEditorTimeCopies;
	bool m_bHasLDM;
	bool m_bToggleLDM;
	char field_16E;
	char field_16F;
	int m_nVerifiedSeed;
	int m_nVerifiedRand;
	bool m_bVerified;
	bool m_bPublished;
	bool m_bHasBeenAltered;
	char field_17B;
	int m_nLevelVersion;
	int m_nGameVersion;
	int m_nAttemptsSeed;
	int m_nAttemptsRand;
	int m_nAttempts;
	int m_nJumpSeed;
	int m_nJumpRand;
	int m_nJumps;
	int m_nClickSeed;
	int m_nClickRand;
	int m_nClicks;
	int m_nAttemptTimeSeed;
	int m_nAttemptTimeRand;
	int m_nAttemptTime;
	int m_nLevelSeed;
	bool m_bVfDChk;
	bool m_bAnticheat;
	char field_1BA;
	char field_1BB;
	int m_nPercentage;
	int m_nPercentageRand;
	int m_nPercentageSeed;
	int m_nManaOrbSeed;
	int m_nManaOrbRand;
	int m_nManaOrbs;
	int m_nLeaderboardSeed;
	int m_nLeaderboardRand;
	int m_nLeaderboard;
	int m_nPractice;
	int m_nLikes;
	int m_nDislikes;
	GJLevelLength m_eLength;
	int m_nFeatureScore;
	bool m_bIsEpic;
	bool m_bIsLevelFavourited;
	char field_1F6;
	char field_1F7;
	int m_nFolder;
	int m_nTimelyIDSeed;
	int m_nTimelyIDRand;
	int m_nTimelyID;
	int m_nDemonSeed;
	int m_nDemonRand;
	int m_nDemon;
	GJDemonType m_eDemonType;
	int m_nStarSeed;
	int m_nStarRand;
	int m_nStars;
	bool m_bIsAuto;
	char field_225;
	char field_226;
	char field_227;
	int m_nTotalCoins;
	int m_nVerifiedCoinsSeed;
	int m_nVerifiedCoinsRand;
	int m_nCoinsVerified;
	int m_nPasswordSeed;
	int m_nPasswordRand;
	int m_nLevelIDServerSeed;
	int m_nLevelIDServerRand;
	int m_nLevelIDServer;
	bool m_bIsTwoPlayer;
	char field_24D;
	char field_24E;
	char field_24F;
	_DWORD dword164;
	int m_nCoin1Seed;
	int m_nCoin1Rand;
	int m_nCoin1;
	int m_nCoin2Seed;
	int m_nCoin2Rand;
	int m_nCoin2;
	int m_nCoin3Seed;
	int m_nCoin3Rand;
	int m_nCoin3;
	int m_nRequestedStars;
	_DWORD dword190;
	_DWORD dword194;
	_DWORD dword198;
	_DWORD dword19C;
	_DWORD dword1A0;
	_DWORD dword1A4;
	_DWORD dword1A8;
	_DWORD dword1AC;
	_DWORD dword1B0;
	bool m_bIsChallenge;
	bool m_bIsPlayable;
	char field_2A2;
	char field_2A3;
	int m_nRequiredCoins;
	bool m_bUnlocked;
	char field_2A9;
	char field_2AA;
	char field_2AB;
	float m_fCameraX;
	float m_fCameraY;
	float m_fCameraZoom;
	int m_nBuildTabPage;
	int m_nbuildTabPage;
	int m_nEditorLayer;
	GJLevelType m_eLevelType;
	_DWORD dword1DC;
	std::string m_sTempName;
	std::string m_sCapacityString;
	bool m_bHighObjectCount;
	char field_2D5;
	char field_2D6;
	char field_2D7;
	std::string m_sLevelProgress;


	GJGameLevel();
	void savePercentage(int _percentage, bool _practice, int _clicks, int _attemptTime, bool _vfDChk)
};
