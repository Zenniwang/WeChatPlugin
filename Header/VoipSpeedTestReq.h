//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VoipSpeedTestReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRoomId:1;
    unsigned int hasCallType:1;
    unsigned int hasNetType:1;
    unsigned int hasIsConnecting:1;
    unsigned int hasIsConnected:1;
    unsigned int hasC2Clossrate:1;
    unsigned int hasC2CrttCnt:1;
    int c2CrttMemoizedSerializedSize;
    unsigned int hasC2SdownLossRate:1;
    unsigned int hasC2SrttCnt:1;
    int c2SrttMemoizedSerializedSize;
    unsigned int hasSendPkts:1;
    unsigned int hasRcvPkts:1;
    int roomId;
    unsigned int callType;
    unsigned int netType;
    unsigned int isConnecting;
    unsigned int isConnected;
    unsigned int c2Clossrate;
    unsigned int c2CrttCnt;
    unsigned int c2SdownLossRate;
    unsigned int c2SrttCnt;
    unsigned int sendPkts;
    unsigned int rcvPkts;
    BaseRequest *baseRequest;
    NSMutableArray *mutableC2CrttList;
    NSMutableArray *mutableC2SrttList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetRcvPkts:) unsigned int rcvPkts; // @synthesize rcvPkts;
@property(readonly, nonatomic) BOOL hasRcvPkts; // @synthesize hasRcvPkts;
@property(nonatomic, setter=SetSendPkts:) unsigned int sendPkts; // @synthesize sendPkts;
@property(readonly, nonatomic) BOOL hasSendPkts; // @synthesize hasSendPkts;
@property(retain, nonatomic) NSMutableArray *mutableC2SrttList; // @synthesize mutableC2SrttList;
@property(nonatomic, setter=SetC2SrttCnt:) unsigned int c2SrttCnt; // @synthesize c2SrttCnt;
@property(readonly, nonatomic) BOOL hasC2SrttCnt; // @synthesize hasC2SrttCnt;
@property(nonatomic, setter=SetC2SdownLossRate:) unsigned int c2SdownLossRate; // @synthesize c2SdownLossRate;
@property(readonly, nonatomic) BOOL hasC2SdownLossRate; // @synthesize hasC2SdownLossRate;
@property(retain, nonatomic) NSMutableArray *mutableC2CrttList; // @synthesize mutableC2CrttList;
@property(nonatomic, setter=SetC2CrttCnt:) unsigned int c2CrttCnt; // @synthesize c2CrttCnt;
@property(readonly, nonatomic) BOOL hasC2CrttCnt; // @synthesize hasC2CrttCnt;
@property(nonatomic, setter=SetC2Clossrate:) unsigned int c2Clossrate; // @synthesize c2Clossrate;
@property(readonly, nonatomic) BOOL hasC2Clossrate; // @synthesize hasC2Clossrate;
@property(nonatomic, setter=SetIsConnected:) unsigned int isConnected; // @synthesize isConnected;
@property(readonly, nonatomic) BOOL hasIsConnected; // @synthesize hasIsConnected;
@property(nonatomic, setter=SetIsConnecting:) unsigned int isConnecting; // @synthesize isConnecting;
@property(readonly, nonatomic) BOOL hasIsConnecting; // @synthesize hasIsConnecting;
@property(nonatomic, setter=SetNetType:) unsigned int netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(nonatomic, setter=SetCallType:) unsigned int callType; // @synthesize callType;
@property(readonly, nonatomic) BOOL hasCallType; // @synthesize hasCallType;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addC2SrttFromArray:(id)arg1;
- (void)addC2Srtt:(unsigned int)arg1;
- (void)addC2CrttFromArray:(id)arg1;
- (void)addC2Crtt:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *c2Srtt; // @dynamic c2Srtt;
- (id)c2SrttList;
@property(retain, nonatomic) NSMutableArray *c2Crtt; // @dynamic c2Crtt;
- (id)c2CrttList;
- (id)init;

@end
