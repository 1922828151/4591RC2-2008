/*
 * func-name: sub_10095D70
 * func-address: 0x10095d70
 * callers: 0x10097ea0
 * callees: 0x10009f20, 0x10095480, 0x10099ce0, 0x10177f5a, 0x10177f60, 0x10177f66, 0x101a251c
 */

int __cdecl sub_10095D70(int a1)
{
  int v1; // ebx
  BOOL Version; // ebp
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  char *v6; // eax
  size_t FileVersionInfoSizeA; // eax
  DWORD v9; // esi
  void *v10; // eax
  void *v11; // edi
  int v12; // edi
  int v13; // ebp
  int v14; // ebx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  DWORD nSize; // [esp+10h] [ebp-32Ch] BYREF
  int v26; // [esp+14h] [ebp-328h]
  int v27; // [esp+18h] [ebp-324h]
  LPVOID lpBuffer; // [esp+1Ch] [ebp-320h] BYREF
  unsigned int puLen; // [esp+20h] [ebp-31Ch] BYREF
  _BYTE VersionInformation[156]; // [esp+24h] [ebp-318h] BYREF
  _BYTE v31[28]; // [esp+C0h] [ebp-27Ch] BYREF
  _BYTE v32[28]; // [esp+DCh] [ebp-260h] BYREF
  _BYTE v33[28]; // [esp+F8h] [ebp-244h] BYREF
  _BYTE v34[28]; // [esp+114h] [ebp-228h] BYREF
  _BYTE v35[28]; // [esp+130h] [ebp-20Ch] BYREF
  _BYTE v36[28]; // [esp+14Ch] [ebp-1F0h] BYREF
  _BYTE v37[28]; // [esp+168h] [ebp-1D4h] BYREF
  _BYTE v38[28]; // [esp+184h] [ebp-1B8h] BYREF
  _BYTE v39[28]; // [esp+1A0h] [ebp-19Ch] BYREF
  _BYTE v40[28]; // [esp+1BCh] [ebp-180h] BYREF
  _BYTE v41[28]; // [esp+1D8h] [ebp-164h] BYREF
  _BYTE v42[28]; // [esp+1F4h] [ebp-148h] BYREF
  _BYTE v43[27]; // [esp+210h] [ebp-12Ch] BYREF
  char v44; // [esp+22Bh] [ebp-111h] BYREF
  CHAR Buffer[260]; // [esp+22Ch] [ebp-110h] BYREF
  int v46; // [esp+338h] [ebp-4h]

  v1 = 0;
  v27 = 0;
  memset(Buffer, 0, sizeof(Buffer));
  nSize = 15;
  memset(VersionInformation, 0, sizeof(VersionInformation));
  *(_DWORD *)VersionInformation = 156;
  Version = GetVersionExA((LPOSVERSIONINFOA)VersionInformation);
  if ( Version || (*(_DWORD *)VersionInformation = 148, GetVersionExA((LPOSVERSIONINFOA)VersionInformation)) )
  {
    GetComputerNameA(byte_1028580C, &nSize);
    nSize = 15;
    GetUserNameA(byte_102857FC, &nSize);
    if ( *(_DWORD *)&VersionInformation[16] == 1 )
    {
      v4 = *(_DWORD *)&VersionInformation[4];
      v5 = *(_DWORD *)&VersionInformation[8];
      if ( *(_DWORD *)&VersionInformation[4] > 4u
        || *(_DWORD *)&VersionInformation[4] == 4 && *(_DWORD *)&VersionInformation[8] )
      {
        strcpy((char *)&dword_102857DC, "Windows 98");
      }
      else
      {
        strcpy((char *)&dword_102857DC, "Windows 95");
      }
LABEL_26:
      if ( Version && VersionInformation[154] == 1 )
      {
        if ( (*(_WORD *)&VersionInformation[152] & 0x200) != 0 )
          strcpy((char *)&dword_1028128C, " Home ");
        else
          strcpy((char *)&dword_1028128C, " Professional ");
      }
      dword_102857D0 = v5;
      dword_102857D4 = v4;
      GetSystemDirectoryA(Buffer, 0x104u);
      v6 = &v44;
      while ( *++v6 )
        ;
      strcpy(v6, "\\user.exe");
      FileVersionInfoSizeA = GetFileVersionInfoSizeA(Buffer, &nSize);
      v9 = FileVersionInfoSizeA;
      if ( FileVersionInfoSizeA )
      {
        v10 = malloc(FileVersionInfoSizeA);
        v11 = v10;
        if ( v10 )
        {
          if ( GetFileVersionInfoA(Buffer, 0, v9, v10) )
          {
            if ( VerQueryValueA(v11, "\\VarFileInfo\\Translation", &lpBuffer, &puLen) )
              word_102857D8 = *(_WORD *)lpBuffer;
            else
              v1 = 13;
          }
          else
          {
            v1 = 12;
          }
          free(v11);
          if ( !v1 )
            goto LABEL_49;
        }
        else
        {
          v1 = 11;
        }
      }
      else
      {
        v1 = 10;
      }
      switch ( v1 )
      {
        case 10:
          MessageBoxA(0, "failed to get version size", "error", 0xAu);
          break;
        case 11:
          MessageBoxA(0, "failed to allocate memory", "error", 0xAu);
          break;
        case 12:
          MessageBoxA(0, "failed to get version information", "error", 0xAu);
          break;
        case 13:
          MessageBoxA(0, "failed to get languagecode", "error", 0xAu);
          break;
        default:
          break;
      }
LABEL_49:
      v12 = std::string::string(v40, " User:");
      v46 = 1;
      v13 = std::string::string(v38, ")");
      LOBYTE(v46) = 2;
      v14 = sub_10009F20((int)v36, dword_102857D0);
      LOBYTE(v46) = 3;
      v26 = sub_10009F20((int)v34, dword_102857D4);
      LOBYTE(v46) = 4;
      v15 = std::string::string(v32, "(");
      LOBYTE(v46) = 5;
      v16 = sub_10099CE0(v41, &dword_1028128C);
      LOBYTE(v46) = 6;
      v17 = std::operator+<char>(v37, &dword_102857DC, v16);
      LOBYTE(v46) = 7;
      v18 = std::operator+<char>(v43, v17, v15);
      LOBYTE(v46) = 8;
      v19 = std::operator+<char>(v31, v18, v26);
      LOBYTE(v46) = 9;
      v20 = std::operator+<char>(v39, v19, ".");
      LOBYTE(v46) = 10;
      v21 = std::operator+<char>(v33, v20, v14);
      LOBYTE(v46) = 11;
      v22 = std::operator+<char>(v42, v21, v13);
      LOBYTE(v46) = 12;
      v23 = std::operator+<char>(v35, v22, v12);
      v3 = a1;
      LOBYTE(v46) = 13;
      std::operator+<char>(a1, v23, byte_102857FC);
      v27 = 1;
      LOBYTE(v46) = 12;
      std::string::~string(v35);
      LOBYTE(v46) = 11;
      std::string::~string(v42);
      LOBYTE(v46) = 10;
      std::string::~string(v33);
      LOBYTE(v46) = 9;
      std::string::~string(v39);
      LOBYTE(v46) = 8;
      std::string::~string(v31);
      LOBYTE(v46) = 7;
      std::string::~string(v43);
      LOBYTE(v46) = 6;
      std::string::~string(v37);
      LOBYTE(v46) = 5;
      std::string::~string(v41);
      LOBYTE(v46) = 4;
      std::string::~string(v32);
      LOBYTE(v46) = 3;
      std::string::~string(v34);
      LOBYTE(v46) = 2;
      std::string::~string(v36);
      LOBYTE(v46) = 1;
      std::string::~string(v38);
      LOBYTE(v46) = 0;
      std::string::~string(v40);
      return v3;
    }
    if ( *(_DWORD *)&VersionInformation[16] == 2 )
    {
      v4 = *(_DWORD *)&VersionInformation[4];
      if ( *(_DWORD *)&VersionInformation[4] == 4 )
      {
        strcpy((char *)&dword_102857DC, "Windows NT");
LABEL_25:
        v5 = *(_DWORD *)&VersionInformation[8];
        goto LABEL_26;
      }
      v5 = *(_DWORD *)&VersionInformation[8];
      if ( *(_DWORD *)&VersionInformation[4] == 5 )
      {
        switch ( *(_DWORD *)&VersionInformation[8] )
        {
          case 0:
            strcpy((char *)&dword_102857DC, "Windows 2000");
            goto LABEL_26;
          case 1:
            strcpy((char *)&dword_102857DC, "Windows XP");
            goto LABEL_26;
          case 2:
            strcpy((char *)&dword_102857DC, "Windows XP64");
            goto LABEL_26;
        }
LABEL_30:
        strcpy((char *)&dword_102857DC, "Unknown OS");
        goto LABEL_26;
      }
      if ( *(_DWORD *)&VersionInformation[4] != 6 || *(_DWORD *)&VersionInformation[8] )
        goto LABEL_30;
      strcpy((char *)&dword_102857DC, "Windows Vista");
      if ( sub_10095480() )
        strcpy((char *)&dword_102857DC, "Windows Vista64");
    }
    v4 = *(_DWORD *)&VersionInformation[4];
    goto LABEL_25;
  }
  v3 = a1;
  std::string::string(a1, 0);
  return v3;
}
