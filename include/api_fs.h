#ifndef __API_FS_H__
#define __API_FS_H__

#include <sdk_init.h>
// #include <api_inc_fs.h>


#define API_FS_Open         CSDK_FUNC(API_FS_Open)
#define API_FS_Close        CSDK_FUNC(API_FS_Close)
#define API_FS_Read         CSDK_FUNC(API_FS_Read)
#define API_FS_Write        CSDK_FUNC(API_FS_Write)
#define API_FS_Flush        CSDK_FUNC(API_FS_Flush)
#define API_FS_Create       CSDK_FUNC(API_FS_Create)
#define API_FS_Delete       CSDK_FUNC(API_FS_Delete)
#define API_FS_Seek         CSDK_FUNC(API_FS_Seek)
#define API_FS_IsEndOfFile  CSDK_FUNC(API_FS_IsEndOfFile)
#define API_FS_Rename       CSDK_FUNC(API_FS_Rename)
#define API_FS_GetFileName  CSDK_FUNC(API_FS_GetFileName)
#define API_FS_GetFileSize  CSDK_FUNC(API_FS_GetFileSize)
#define API_FS_GetDirSize   CSDK_FUNC(API_FS_GetDirSize)
#define API_FS_GetCurDir    CSDK_FUNC(API_FS_GetCurDir)
#define API_FS_ChangeDir    CSDK_FUNC(API_FS_ChangeDir)
#define API_FS_Mkdir        CSDK_FUNC(API_FS_Mkdir)
#define API_FS_Rmdir        CSDK_FUNC(API_FS_Rmdir)
#define API_FS_GetFSInfo    CSDK_FUNC(API_FS_GetFSInfo)

#endif
