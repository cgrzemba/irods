/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* apiHeaderAll.h - This is a script generated header file which contains
 * all the api header files */

#ifndef API_HEADER_ALL_HPP
#define API_HEADER_ALL_HPP

#include "getMiscSvrInfo.hpp"
#include "fileCreate.hpp"
#include "fileOpen.hpp"
#include "fileWrite.hpp"
#include "fileClose.hpp"
#include "fileLseek.hpp"
#include "fileRead.hpp"
#include "fileUnlink.hpp"
#include "fileMkdir.hpp"
#include "fileChmod.hpp"
#include "fileRmdir.hpp"
#include "fileStat.hpp"
#include "dataObjLock.hpp" // JMC - backport 4599
#include "fileGetFsFreeSpace.hpp"
#include "fileOpendir.hpp"
#include "fileClosedir.hpp"
#include "fileReaddir.hpp"
#include "dataObjCreate.hpp"
#include "dataObjOpen.hpp"
#include "dataObjRead.hpp"
#include "dataObjWrite.hpp"
#include "dataObjClose.hpp"
#include "dataObjPut.hpp"
#include "dataPut.hpp"
#include "dataObjGet.hpp"
#include "dataGet.hpp"
#include "dataObjRepl.hpp"
#include "filePut.hpp"
#include "fileGet.hpp"
#include "dataCopy.hpp"
#include "dataObjLseek.hpp"
#include "dataObjCopy.hpp"
#include "simpleQuery.hpp"
#include "dataObjUnlink.hpp"
#include "collCreate.hpp"
#include "generalAdmin.hpp"
#include "fileChksum.hpp"
#include "chkNVPathPerm.hpp"
#include "genQuery.hpp"
#include "authRequest.hpp"
#include "authResponse.hpp"
#include "authCheck.hpp"
#include "regColl.hpp"
#include "regDataObj.hpp"
#include "unregDataObj.hpp"
#include "regReplica.hpp"
#include "modDataObjMeta.hpp"
#include "modAVUMetadata.hpp"
#include "fileRename.hpp"
#include "modAccessControl.hpp"
#include "ruleExecSubmit.hpp"
#include "ruleExecDel.hpp"
#include "ruleExecMod.hpp"
#include "execMyRule.hpp"
#include "oprComplete.hpp"
#include "dataObjRename.hpp"
#include "dataObjRsync.hpp"
#include "dataObjChksum.hpp"
#include "phyPathReg.hpp"
#include "dataObjPhymv.hpp"
#include "dataObjTrim.hpp"
#include "objStat.hpp"
#include "execCmd.hpp"
#include "subStructFileCreate.hpp"
#include "subStructFileOpen.hpp"
#include "subStructFileRead.hpp"
#include "subStructFileWrite.hpp"
#include "subStructFileClose.hpp"
#include "subStructFileUnlink.hpp"
#include "subStructFileStat.hpp"
#include "subStructFileLseek.hpp"
#include "subStructFileRename.hpp"
#include "querySpecColl.hpp"
#include "getTempPassword.hpp"
#include "modColl.hpp"
#include "subStructFileMkdir.hpp"
#include "subStructFileRmdir.hpp"
#include "subStructFileOpendir.hpp"
#include "subStructFileReaddir.hpp"
#include "subStructFileClosedir.hpp"
#include "dataObjTruncate.hpp"
#include "fileTruncate.hpp"
#include "subStructFileTruncate.hpp"
#include "generalUpdate.hpp"
#include "getXmsgTicket.hpp"
#include "sendXmsg.hpp"
#include "rcvXmsg.hpp"
#include "subStructFileGet.hpp"
#include "subStructFilePut.hpp"
#include "syncMountedColl.hpp"
#include "structFileSync.hpp"
#include "gsiAuthRequest.hpp"
#include "openCollection.hpp"
#include "readCollection.hpp"
#include "closeCollection.hpp"
#include "collRepl.hpp"
#include "rmColl.hpp"
#include "structFileExtract.hpp"
#include "structFileExtAndReg.hpp"
#include "structFileBundle.hpp"
#include "chkObjPermAndStat.hpp"
#include "userAdmin.hpp"
#include "getRemoteZoneResc.hpp"
#include "dataObjOpenAndStat.hpp"
#include "l3FileGetSingleBuf.hpp"
#include "l3FilePutSingleBuf.hpp"
#include "dataObjCreateAndStat.hpp"
#include "fileStageToCache.hpp"
#include "fileSyncToArch.hpp"
#include "generalRowInsert.hpp"
#include "generalRowPurge.hpp"
#include "krbAuthRequest.hpp"
#include "phyBundleColl.hpp"
#include "unbunAndRegPhyBunfile.hpp"
#include "getHostForPut.hpp"
#include "getRescQuota.hpp"
#include "bulkDataObjReg.hpp"
#include "bulkDataObjPut.hpp"
#include "endTransaction.hpp"
#include "procStat.hpp"
#include "streamRead.hpp"
#include "specificQuery.hpp"
#include "streamClose.hpp"
#include "getHostForGet.hpp"
#include "ticketAdmin.hpp"
#include "getTempPasswordForOther.hpp"
#include "getLimitedPassword.hpp"
#ifdef NETCDF_CLIENT
#include "ncOpen.hpp"
#include "ncCreate.hpp"
#include "ncClose.hpp"
#include "ncInqId.hpp"
#include "ncInqWithId.hpp"
#include "ncGetVarsByType.hpp"
#include "nccfGetVara.hpp"
#include "ncInq.hpp"
#include "ncOpenGroup.hpp"
#include "ncInqGrps.hpp"
#include "ncRegGlobalAttr.hpp"
#include "ncGetAggElement.hpp"
#include "ncGetAggInfo.hpp"
#include "ncArchTimeSeries.hpp"
#endif
#include "pamAuthRequest.hpp"
#include "sslStart.hpp"
#include "sslEnd.hpp"
#ifdef OOI_CI
#include "ooiGenServReq.hpp"
#endif


// =-=-=-=-=-=-=-
// necessary for FUSE
#include "dataObjTruncate.hpp"
#include "fileTruncate.hpp"
#include "subStructFileTruncate.hpp"

// =-=-=-=-=-=-=-
// pluggable authentication
#include "authPluginRequest.hpp"


#endif	/* API_HEADER_ALL_H */
