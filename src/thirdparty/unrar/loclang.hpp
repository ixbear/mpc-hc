#define   MYesNo             "_Yes_No"
#define   MYesNoAll          "_Yes_No_All"
#define   MYesNoAllQ         "_Yes_No_All_nEver_Quit"
#define   MYesNoAllRenQ      "_Yes_No_All_nEver_Rename_Quit"
#define   MContinueQuit      "_Continue_Quit"
#define   MRetryAbort        "_Retry_Abort"
#define   MCopyright         "\nRAR %s   Copyright (c) 1993-%d Alexander Roshal   %d %s %d"
#define   MRegTo             "\nRegistered to %s\n"
#define   MShare             "\nTrial version             Type RAR -? for help\n"
#define   MUCopyright        "\nUNRAR %s freeware      Copyright (c) 1993-%d Alexander Roshal\n"
#define   MBeta              "beta"
#define   MMonthJan          "Jan"
#define   MMonthFeb          "Feb"
#define   MMonthMar          "Mar"
#define   MMonthApr          "Apr"
#define   MMonthMay          "May"
#define   MMonthJun          "Jun"
#define   MMonthJul          "Jul"
#define   MMonthAug          "Aug"
#define   MMonthSep          "Sep"
#define   MMonthOct          "Oct"
#define   MMonthNov          "Nov"
#define   MMonthDec          "Dec"
#define   MRARTitle1         "\nUsage:     rar <command> -<switch 1> -<switch N> <archive> <files...>"
#define   MUNRARTitle1       "\nUsage:     unrar <command> -<switch 1> -<switch N> <archive> <files...>"
#define   MRARTitle2         "\n               <@listfiles...> <path_to_extract\\>"
#define   MCHelpCmd          "\n\n<Commands>"
#define   MCHelpCmdA         "\n  a             Add files to archive"
#define   MCHelpCmdC         "\n  c             Add archive comment"
#define   MCHelpCmdCH        "\n  ch            Change archive parameters"
#define   MCHelpCmdCW        "\n  cw            Write archive comment to file"
#define   MCHelpCmdD         "\n  d             Delete files from archive"
#define   MCHelpCmdE         "\n  e             Extract files without archived paths"
#define   MCHelpCmdF         "\n  f             Freshen files in archive"
#define   MCHelpCmdI         "\n  i[par]=<str>  Find string in archives"
#define   MCHelpCmdK         "\n  k             Lock archive"
#define   MCHelpCmdL         "\n  l[t[a],b]     List archive contents [technical[all], bare]"
#define   MCHelpCmdM         "\n  m[f]          Move to archive [files only]"
#define   MCHelpCmdP         "\n  p             Print file to stdout"
#define   MCHelpCmdR         "\n  r             Repair archive"
#define   MCHelpCmdRC        "\n  rc            Reconstruct missing volumes"
#define   MCHelpCmdRN        "\n  rn            Rename archived files"
#define   MCHelpCmdRR        "\n  rr[N]         Add data recovery record"
#define   MCHelpCmdRV        "\n  rv[N]         Create recovery volumes"
#define   MCHelpCmdS         "\n  s[name|-]     Convert archive to or from SFX"
#define   MCHelpCmdT         "\n  t             Test archive files"
#define   MCHelpCmdU         "\n  u             Update files in archive"
#define   MCHelpCmdV         "\n  v[t[a],b]     Verbosely list archive contents [technical[all],bare]"
#define   MCHelpCmdX         "\n  x             Extract files with full path"
#define   MCHelpSw           "\n\n<Switches>"
#define   MCHelpSwm          "\n  -             Stop switches scanning"
#define   MCHelpSwAT         "\n  @[+]          Disable [enable] file lists"
#define   MCHelpSwAC         "\n  ac            Clear Archive attribute after compression or extraction"
#define   MCHelpSwAD         "\n  ad            Append archive name to destination path"
#define   MCHelpSwAG         "\n  ag[format]    Generate archive name using the current date"
#define   MCHelpSwAI         "\n  ai            Ignore file attributes"
#define   MCHelpSwAO         "\n  ao            Add files with Archive attribute set"
#define   MCHelpSwAP         "\n  ap<path>      Set path inside archive"
#define   MCHelpSwAS         "\n  as            Synchronize archive contents"
#define   MCHelpSwCm         "\n  c-            Disable comments show"
#define   MCHelpSwCFGm       "\n  cfg-          Disable read configuration"
#define   MCHelpSwCL         "\n  cl            Convert names to lower case"
#define   MCHelpSwCU         "\n  cu            Convert names to upper case"
#define   MCHelpSwDF         "\n  df            Delete files after archiving"
#define   MCHelpSwDH         "\n  dh            Open shared files"
#define   MCHelpSwDR         "\n  dr            Delete files to Recycle Bin"
#define   MCHelpSwDS         "\n  ds            Disable name sort for solid archive"
#define   MCHelpSwDW         "\n  dw            Wipe files after archiving"
#define   MCHelpSwEa         "\n  e[+]<attr>    Set file exclude and include attributes"
#define   MCHelpSwED         "\n  ed            Do not add empty directories"
#define   MCHelpSwEE         "\n  ee            Do not save and extract extended attributes"
#define   MCHelpSwEN         "\n  en            Do not put 'end of archive' block"
#define   MCHelpSwEP         "\n  ep            Exclude paths from names"
#define   MCHelpSwEP1        "\n  ep1           Exclude base directory from names"
#define   MCHelpSwEP2        "\n  ep2           Expand paths to full"
#define   MCHelpSwEP3        "\n  ep3           Expand paths to full including the drive letter"
#define   MCHelpSwF          "\n  f             Freshen files"
#define   MCHelpSwHP         "\n  hp[password]  Encrypt both file data and headers"
#define   MCHelpSwHT         "\n  ht[b|c]       Select hash type [BLAKE2,CRC32] for file checksum"
#define   MCHelpSwIDP        "\n  id[c,d,p,q]   Disable messages"
#define   MCHelpSwIEML       "\n  ieml[addr]    Send archive by email"
#define   MCHelpSwIERR       "\n  ierr          Send all messages to stderr"
#define   MCHelpSwILOG       "\n  ilog[name]    Log errors to file (registered versions only)"
#define   MCHelpSwINUL       "\n  inul          Disable all messages"
#define   MCHelpSwIOFF       "\n  ioff          Turn PC off after completing an operation"
#define   MCHelpSwISND       "\n  isnd          Enable sound"
#define   MCHelpSwK          "\n  k             Lock archive"
#define   MCHelpSwKB         "\n  kb            Keep broken extracted files"
#define   MCHelpSwLog        "\n  log[f][=name] Write names to log file"
#define   MCHelpSwMn         "\n  m<0..5>       Set compression level (0-store...3-default...5-maximal)"
#define   MCHelpSwMA         "\n  ma[4|5]       Specify a version of archiving format"
#define   MCHelpSwMC         "\n  mc<par>       Set advanced compression parameters"
#define   MCHelpSwMD         "\n  md<n>[k,m,g]  Dictionary size in KB, MB or GB"
#define   MCHelpSwMS         "\n  ms[ext;ext]   Specify file types to store"
#define   MCHelpSwMT         "\n  mt<threads>   Set the number of threads"
#define   MCHelpSwN          "\n  n<file>       Additionally filter included files"
#define   MCHelpSwNa         "\n  n@            Read additional filter masks from stdin"
#define   MCHelpSwNal        "\n  n@<list>      Read additional filter masks from list file"
#define   MCHelpSwO          "\n  o[+|-]        Set the overwrite mode"
#define   MCHelpSwOC         "\n  oc            Set NTFS Compressed attribute"
#define   MCHelpSwOH         "\n  oh            Save hard links as the link instead of the file"
#define   MCHelpSwOI         "\n  oi[0-4][:min] Save identical files as references"
#define   MCHelpSwOL         "\n  ol            Save symbolic links as the link instead of the file"
#define   MCHelpSwOR         "\n  or            Rename files automatically"
#define   MCHelpSwOS         "\n  os            Save NTFS streams"
#define   MCHelpSwOW         "\n  ow            Save or restore file owner and group"
#define   MCHelpSwP          "\n  p[password]   Set password"
#define   MCHelpSwPm         "\n  p-            Do not query password"
#define   MCHelpSwQO         "\n  qo[-|+]       Add quick open information [none|force]"
#define   MCHelpSwR          "\n  r             Recurse subdirectories"
#define   MCHelpSwRm         "\n  r-            Disable recursion"
#define   MCHelpSwR0         "\n  r0            Recurse subdirectories for wildcard names only"
#define   MCHelpSwRI         "\n  ri<P>[:<S>]   Set priority (0-default,1-min..15-max) and sleep time in ms"
#define   MCHelpSwRR         "\n  rr[N]         Add data recovery record"
#define   MCHelpSwRV         "\n  rv[N]         Create recovery volumes"
#define   MCHelpSwS          "\n  s[<N>,v[-],e] Create solid archive"
#define   MCHelpSwSm         "\n  s-            Disable solid archiving"
#define   MCHelpSwSC         "\n  sc<chr>[obj]  Specify the character set"
#define   MCHelpSwSFX        "\n  sfx[name]     Create SFX archive"
#define   MCHelpSwSI         "\n  si[name]      Read data from standard input (stdin)"
#define   MCHelpSwSL         "\n  sl<size>      Process files with size less than specified"
#define   MCHelpSwSM         "\n  sm<size>      Process files with size more than specified"
#define   MCHelpSwT          "\n  t             Test files after archiving"
#define   MCHelpSwTK         "\n  tk            Keep original archive time"
#define   MCHelpSwTL         "\n  tl            Set archive time to latest file"
#define   MCHelpSwTN         "\n  tn<time>      Process files newer than <time>"
#define   MCHelpSwTO         "\n  to<time>      Process files older than <time>"
#define   MCHelpSwTA         "\n  ta<date>      Process files modified after <date> in YYYYMMDDHHMMSS format"
#define   MCHelpSwTB         "\n  tb<date>      Process files modified before <date> in YYYYMMDDHHMMSS format"
#define   MCHelpSwTS         "\n  ts<m,c,a>[N]  Save or restore file time (modification, creation, access)"
#define   MCHelpSwU          "\n  u             Update files"
#define   MCHelpSwV          "\n  v             Create volumes with size autodetection or list all volumes"
#define   MCHelpSwVUnr       "\n  v             List all volumes"
#define   MCHelpSwVn         "\n  v<size>[k,b]  Create volumes with size=<size>*1000 [*1024, *1]"
#define   MCHelpSwVD         "\n  vd            Erase disk contents before creating volume"
#define   MCHelpSwVER        "\n  ver[n]        File version control"
#define   MCHelpSwVN         "\n  vn            Use the old style volume naming scheme"
#define   MCHelpSwVP         "\n  vp            Pause before each volume"
#define   MCHelpSwW          "\n  w<path>       Assign work directory"
#define   MCHelpSwX          "\n  x<file>       Exclude specified file"
#define   MCHelpSwXa         "\n  x@            Read file names to exclude from stdin"
#define   MCHelpSwXal        "\n  x@<list>      Exclude files listed in specified list file"
#define   MCHelpSwY          "\n  y             Assume Yes on all queries"
#define   MCHelpSwZ          "\n  z[file]       Read archive comment from file"
#define   MBadArc            "\nERROR: Bad archive %s\n"
#define   MAskPsw            "Enter password (will not be echoed)"
#define   MAskPswFor         "\nEnter password (will not be echoed) for %s: "
#define   MReAskPsw          "\nReenter password: "
#define   MNotMatchPsw       "\nERROR: Passwords do not match\n"
#define   MErrWrite          "Write error in the file %s"
#define   MErrRead           "Read error in the file %s"
#define   MErrSeek           "Seek error in the file %s"
#define   MErrFClose         "Cannot close the file %s"
#define   MErrOutMem         "Not enough memory"
#define   MErrBrokenArc      "Corrupt archive - use 'Repair' command"
#define   MProgAborted       "Program aborted"
#define   MErrRename         "\nCannot rename %s to %s"
#define   MAbsNextVol        "\nCannot find volume %s"
#define   MBreak             "\nUser break\n"
#define   MAskCreatVol       "\nCreate next volume ?"
#define   MAskNextDisk       "\nDisk full. Insert next"
#define   MCreatVol          "\n\nCreating %sarchive %s\n"
#define   MAskNextVol        "\nInsert disk with %s"
#define   MTestVol           "\n\nTesting archive %s\n"
#define   MExtrVol           "\n\nExtracting from %s\n"
#define   MConverting        "\nConverting %s"
#define   MCvtToSFX          "\nConvert archives to SFX"
#define   MCvtFromSFX        "\nRemoving SFX module"
#define   MNotSFX            "\n%s is not SFX archive"
#define   MNotRAR            "\n%s is not RAR archive"
#define   MNotFirstVol       "\n%s is not the first volume"
#define   MCvtOldFormat      "\n%s - cannot convert to SFX archive with old format"
#define   MCannotCreate      "\nCannot create %s"
#define   MCannotOpen        "\nCannot open %s"
#define   MUnknownMeth       "\nUnknown method in %s"
#define   MVerRequired       "\nYou need RAR %d.%d to unpack it"
#define   MNewRarFormat      "\nUnsupported archive format. Please update RAR to a newer version."
#define   MOk                " OK"
#define   MDone              "\nDone"
#define   MLockingArc        "\nLocking archive"
#define   MNotMdfOld         "\n\nERROR: Cannot modify old format archive"
#define   MNotMdfLock        "\n\nERROR: Locked archive"
#define   MNotMdfVol         "\n\nERROR: Cannot modify volume"
#define   MPackAskReg        "\nEvaluation copy. Please register.\n"
#define   MCreateArchive     "\nCreating %sarchive %s\n"
#define   MUpdateArchive     "\nUpdating %sarchive %s\n"
#define   MAddSolid          "solid "
#define   MAddFile           "\nAdding    %-58s     "
#define   MUpdFile           "\nUpdating  %-58s     "
#define   MAddPoints         "\n...       %-58s     "
#define   MCannotUpdPswSolid "\nERROR: Cannot update solid archives with password\n"
#define   MMoveDelFiles      "\n\nDeleting files %s..."
#define   MMoveDelDirs       "and directories"
#define   MMoveDelFile       "\nDeleting %-30s"
#define   MMoveDeleted       "    deleted"
#define   MMoveNotDeleted    "    NOT DELETED"
#define   MClearAttrib       "\n\nClearing attributes..."
#define   MMoveDelDir        "\nDeleting directory %-30s"
#define   MWarErrFOpen       "\nWARNING: Cannot open %d %s"
#define   MErrOpenFiles      "files"
#define   MErrOpenFile       "file"
#define   MAddNoFiles        "\nWARNING: No files"
#define   MMdfEncrSol        "\n%s: encrypted"
#define   MCannotMdfEncrSol  "\nCannot modify solid archive containing encrypted files"
#define   MAddAnalyze        "\nAnalyzing archived files: "
#define   MRepacking         "\nRepacking archived files: "
#define   MCRCFailed         "\n%-20s - checksum error"
#define   MExtrTest          "\n\nTesting archive %s\n"
#define   MExtracting        "\n\nExtracting from %s\n"
#define   MUseCurPsw         "\n%s - use current password ?"
#define   MCreatDir          "\nCreating    %-56s"
#define   MExtrSkipFile      "\nSkipping    %-56s"
#define   MExtrTestFile      "\nTesting     %-56s"
#define   MExtrFile          "\nExtracting  %-56s"
#define   MExtrPoints        "\n...         %-56s"
#define   MExtrErrMkDir      "\nCannot create directory %s"
#define   MExtrPrinting      "\n------ Printing %s\n\n"
#define   MEncrBadCRC        "\nChecksum error in the encrypted file %s. Corrupt file or wrong password."
#define   MExtrNoFiles       "\nNo files to extract"
#define   MExtrAllOk         "\nAll OK"
#define   MExtrTotalErr      "\nTotal errors: %ld"
#define   MFileExists        "\n\n%s already exists. Overwrite it ?"
#define   MAskOverwrite      "\nOverwrite %s ?"
#define   MAskNewName        "\nEnter new name: "
#define   MHeaderBroken      "\nCorrupt header is found"
#define   MMainHeaderBroken  "\nMain archive header is corrupt"
#define   MLogFileHead       "\n%s - the file header is corrupt"
#define   MLogCommHead       "\nThe comment header is corrupt\n"
#define   MLogProtectHead    "The data recovery header is corrupt"
#define   MReadStdinCmt      "\nReading comment from stdin\n"
#define   MReadCommFrom      "\nReading comment from %s"
#define   MDelComment        "\nDeleting comment from %s"
#define   MAddComment        "\nAdding comment to %s"
#define   MFCommAdd          "\nAdding file comments"
#define   MAskFComm          "\n\nReading comment for %s : %s from stdin\n"
#define   MLogCommBrk        "\nThe archive comment is corrupt"
#define   MCommAskCont       "\nPress 'Enter' to continue or 'Q' to quit:"
#define   MWriteCommTo       "\nWrite comment to %s"
#define   MCommNotPres       "\nComment is not present"
#define   MDelFrom           "\nDeleting from %s"
#define   MDeleting          "\nDeleting %s"
#define   MEraseArc          "\nErasing empty archive %s"
#define   MNoDelFiles        "\nNo files to delete"
#define   MLogTitle          "\n\n--------  %2d %s %d, archive %s\n"
#define   MPathTooLong       "\nERROR: Path too long\n"
#define   MListArchive       "Archive"
#define   MListDetails       "Details"
#define   MListSolid         "solid"
#define   MListSFX           "SFX"
#define   MListVolume        "volume"
#define   MListRR            "recovery record"
#define   MListLock          "lock"
#define   MListEnc           "encrypted"
#define   MListEncHead       "encrypted headers"
#define   MListTitleL        " Attributes      Size    Date   Time   Name"
#define   MListTitleV        " Attributes      Size    Packed Ratio   Date   Time   Checksum  Name"
#define   MListName          "Name"
#define   MListType          "Type"
#define   MListFile          "File"
#define   MListDir           "Directory"
#define   MListUSymlink      "Unix symbolic link"
#define   MListWSymlink      "Windows symbolic link"
#define   MListJunction      "NTFS junction point"
#define   MListHardlink      "Hard link"
#define   MListCopy          "File copy"
#define   MListStream        "NTFS alternate data stream"
#define   MListTarget        "Target"
#define   MListSize          "Size"
#define   MListPacked        "Packed size"
#define   MListRatio         "Ratio"
#define   MListMtime         "mtime"
#define   MListCtime         "ctime"
#define   MListAtime         "atime"
#define   MListAttr          "Attributes"
#define   MListFlags         "Flags"
#define   MListCompInfo      "Compression"
#define   MListHostOS        "Host OS"
#define   MListFileVer       "File version"
#define   MListService       "Service"
#define   MListEAHead        "\n   OS/2 extended attributes"
#define   MListUOHead        "\n   Unix Owner/Group data:    %-14s %-14s"
#define   MListBeEAHead      "\n   BeOS extended attributes"
#define   MListNTACLHead     "\n   NTFS security data"
#define   MListStrmHead      "\n   NTFS stream: %s"
#define   MListUnkHead       "\n   Unknown subheader type: 0x%04x"
#define   MFileComment       "\nComment: "
#define   MYes               "Yes"
#define   MNo                "No"
#define   MListNoFiles       "  0 files\n"
#define   MRprReconstr       "\nReconstructing %s"
#define   MRprBuild          "\nBuilding %s"
#define   MRprOldFormat      "\nCannot repair archive with old format"
#define   MRprFind           "\nFound  %s"
#define   MRprAskIsSol       "\nThe archive header is corrupt. Mark archive as solid ?"
#define   MRprNoFiles        "\nNo files found"
#define   MLogUnexpEOF       "\nUnexpected end of archive"
#define   MRepAskReconst     "\nReconstruct archive structure ?"
#define   MRecScanning       "\nScanning..."
#define   MRecRNotFound      "\nData recovery record not found"
#define   MRecRFound         "\nData recovery record found"
#define   MRecSecDamage      "\nSector %ld (offsets %lX...%lX) damaged"
#define   MRecCorrected      " - data recovered"
#define   MRecFailed         " - cannot recover data"
#define   MAddRecRec         "\nAdding data recovery record"
#define   MEraseForVolume    "\n\nErasing contents of drive %c:\n"
#define   MGetOwnersError    "\nWARNING: Cannot get %s owner and group\n"
#define   MErrGetOwnerID     "\nWARNING: Cannot get owner %s ID\n"
#define   MErrGetGroupID     "\nWARNING: Cannot get group %s ID\n"
#define   MOwnersBroken      "\nERROR: %s group and owner data are corrupt\n"
#define   MSetOwnersError    "\nWARNING: Cannot set %s owner and group\n"
#define   MErrLnkRead        "\nWARNING: Cannot read symbolic link %s"
#define   MSymLinkExists     "\nWARNING: Symbolic link %s already exists"
#define   MAskRetryCreate    "\nCannot create %s. Retry ?"
#define   MListMACHead1      "\n Mac OS file type:  %c%c%c%c  ; "
#define   MListMACHead2      "file creator:  %c%c%c%c\n"
#define   MDataBadCRC        "\n%-20s : packed data checksum error in volume %s"
#define   MFileRO            "\n%s is read-only"
#define   MACLGetError       "\nWARNING: Cannot get %s security data\n"
#define   MACLSetError       "\nWARNING: Cannot set %s security data\n"
#define   MACLBroken         "\nERROR: %s security data are corrupt\n"
#define   MACLUnknown        "\nWARNING: Unknown format of %s security data\n"
#define   MStreamBroken      "\nERROR: %s stream data are corrupt\n"
#define   MStreamUnknown     "\nWARNING: Unknown format of %s stream data\n"
#define   MInvalidName       "\nERROR: Invalid file name %s"
#define   MEABroken          "\nERROR: %s extended attributes are corrupt\n"
#define   MEAUnknHeader      "\nWARNING: %s - unknown format of extended attributes\n"
#define   MCannotSetEA       "\nWARNING: cannot set extended attributes to %s\n"
#define   MCannotGetEA       "\nERROR: Cannot get extended attributes of %s\n"
#define   MShowEA            " (+EA)"
#define   MSkipEA            "\n...skipping extended attributes"
#define   MProcessArc        "\n\nProcessing archive %s"
#define   MSyncScanError     "\nFile search errors, cannot synchronize archive"
#define   MCorrectingName    "\nWARNING: Attempting to correct the invalid file name"
#define   MUnpCannotMerge    "\nWARNING: You need to start extraction from a previous volume to unpack %s"
#define   MUnknownOption     "\nERROR: Unknown option: %s"
#define   MSubHeadCorrupt    "\nERROR: Corrupt data header found, ignored"
#define   MSubHeadUnknown    "\nWARNING: Unknown data header format, ignored"
#define   MSubHeadDataCRC    "\nERROR: Corrupt %s data block"
#define   MSubHeadType       "\nData header type: %s"
#define   MScanError         "\nCannot read contents of %s"
#define   MNotVolume         "\n%s is not volume"
#define   MRecVolDiffSets    "\nERROR: %s and %s belong to different sets"
#define   MRecVolMissing     "\n%d volumes missing"
#define   MRecVolFound       "\n%d recovery volumes found"
#define   MRecVolAllExist    "\nNothing to reconstruct"
#define   MRecVolCannotFix   "\nReconstruction impossible"
#define   MReconstructing    "\nReconstructing..."
#define   MCreating          "\nCreating %s"
#define   MRenaming          "\nRenaming %s to %s"
#define   MNTFSRequired      "\nWrite error: only NTFS file system supports files larger than 4 GB"
#define   MErrChangeAttr     "\nWARNING: Cannot change attributes of %s"
#define   MWrongSFXVer       "\nERROR: default SFX module does not support RAR %d.%d archives"
#define   MCannotEncName     "\nCannot encrypt archive already contained encrypted files"
#define   MCannotEmail       "\nCannot email the file %s"
#define   MCopyrightS        "\nRAR SFX archive" 
#define   MSHelpCmd          "\n\n<Commands>" 
#define   MSHelpCmdE         "\n  -x      Extract from archive (default)" 
#define   MSHelpCmdT         "\n  -t      Test archive files" 
#define   MSHelpCmdV         "\n  -v      Verbosely list contents of archive" 
#define   MMaxPathLimit      "\nTotal path and file name length must not exceed %d characters"
#define   MRecVolLimit       "\nTotal number of usual and recovery volumes must not exceed %d"
#define   MVolumeNumber      "volume %d"
#define   MCannotDelete      "\nCannot delete %s"
#define   MCalcCRC           "\nCalculating the checksum"
#define   MTooLargeSFXArc    "\nWARNING: Too large SFX archive. Windows cannot run the executable file exceeding 4 GB."
#define   MCalcCRCAllVol     "\nCalculating checksums of all volumes."
#define   MNotEnoughDisk     "\nERROR: Not enough disk space for %s."
#define   MNewerRAR          "\nYou may need a newer version of RAR."
#define   MUnkEncMethod      "\nUnknown encryption method in %s"
#define   MWrongPassword     "\nThe specified password is incorrect."
#define   MRepairing         "\nRepairing"
#define   MAreaDamaged       "\nCorrupt %d bytes at %08x %08x"
#define   MBlocksRecovered   "\n%d blocks recovered."
#define   MRRDamaged         "\nRecovery record is corrupt."
#define   MTestingRR         "\nTesting the recovery record"
#define   MFailed            "Failed"
#define   MIncompatSwitch    "\n%s switch is not supported for RAR %d.x archive format."
#define   MSearchDupFiles    "\nSearching for identical files"
#define   MNumFound          "%d found."
#define   MUnknownExtra      "\nUnknown extra field in %s."
#define   MCopyError         "\nCannot copy %s to %s."
#define   MCopyErrorHint     "\nYou need to unpack the entire archive to create file copy entries."
#define   MCopyingData       "\nCopying data"
#define   MErrCreateLnkS     "\nCannot create symbolic link %s"
#define   MErrCreateLnkH     "\nCannot create hard link %s"
#define   MNeedAdmin         "\nYou may need to run RAR as administrator"
