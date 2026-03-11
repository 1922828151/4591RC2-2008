/*
 * func-name: sub_10137940
 * func-address: 0x10137940
 * callers: 0x100174cc
 * callees: 0x10008a67, 0x102c99de, 0x102c9d62, 0x102c9d98, 0x102c9ea2, 0x102ca13e
 */

char __thiscall sub_10137940(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v8; // esi
  DWORD v9; // ebp
  const CHAR *v10; // eax
  HANDLE FileA; // eax
  int v13; // ebx
  int v14; // ecx
  signed int v15; // ebx
  int *v16; // edi
  bool v17; // zf
  void *v18; // ecx
  DWORD v19; // eax
  int v20; // ebx
  size_t v21; // esi
  size_t v22; // esi
  _DWORD *v23; // eax
  _DWORD *v24; // ebp
  int v25; // eax
  size_t v26; // esi
  char v27; // dl
  DWORD v28; // ebx
  void *v29; // [esp-14h] [ebp-C4h]
  DWORD NumberOfBytesRead; // [esp+14h] [ebp-9Ch] BYREF
  DWORD i; // [esp+18h] [ebp-98h]
  signed int v32; // [esp+1Ch] [ebp-94h]
  int v33; // [esp+20h] [ebp-90h]
  _DWORD *v34; // [esp+24h] [ebp-8Ch]
  void *v35; // [esp+28h] [ebp-88h]
  _BYTE v36[28]; // [esp+2Ch] [ebp-84h] BYREF
  _DWORD *v37; // [esp+48h] [ebp-68h]
  _BYTE v38[28]; // [esp+4Ch] [ebp-64h] BYREF
  _DWORD *v39; // [esp+68h] [ebp-48h]
  int v40[3]; // [esp+6Ch] [ebp-44h] BYREF
  _BYTE v41[28]; // [esp+78h] [ebp-38h] BYREF
  _BYTE Buffer[9]; // [esp+94h] [ebp-1Ch] BYREF
  char v43; // [esp+9Dh] [ebp-13h]
  int v44; // [esp+ACh] [ebp-4h]

  v8 = this;
  v34 = this;
  v9 = 0;
  v44 = 0;
  v10 = (const CHAR *)std::string::c_str(&a2);
  FileA = CreateFileA(v10, 0x80000000, 1u, 0, 3u, 0x80u, 0);
  v8[8] = FileA;
  if ( FileA == (HANDLE)-1 )
  {
    v44 = -1;
LABEL_3:
    std::string::~string(&a2);
    return 0;
  }
  std::string::operator=(v8 + 1, &a2);
  v43 = 0;
  v29 = (void *)v8[8];
  memset(Buffer, 0, sizeof(Buffer));
  ReadFile(v29, Buffer, 8u, &NumberOfBytesRead, 0);
  v13 = *(_DWORD *)Buffer;
  v14 = *(_DWORD *)&Buffer[4];
  v8[9] = *(_DWORD *)Buffer;
  v15 = v13 - 8;
  v8[10] = v14;
  v32 = v15;
  v16 = (int *)operator new(0x2801u);
  memset(v16, 0, 0x2801u);
  v17 = v15 == 0;
  v33 = 10240;
  for ( i = 0; v15 > 0; v17 = v15 == 0 )
  {
    v18 = (void *)v8[8];
    if ( v15 >= (int)(v33 - v9) )
    {
      ReadFile(v18, (char *)v16 + v9, v33 - v9, &NumberOfBytesRead, 0);
    }
    else
    {
      v33 = v15;
      ReadFile(v18, (char *)v16 + v9, v15, &NumberOfBytesRead, 0);
    }
    v19 = NumberOfBytesRead;
    if ( NumberOfBytesRead )
    {
      v20 = *v16;
      v21 = 0;
      if ( *v16 <= NumberOfBytesRead + v9 )
      {
        while ( 1 )
        {
          v22 = v21 + 4;
          v23 = operator new(0x44u);
          v24 = v23;
          v35 = v23;
          LOBYTE(v44) = 1;
          if ( v23 )
          {
            std::string::string(v23);
            LOBYTE(v44) = 2;
            std::string::string(v24 + 7);
            v24[14] = 0;
            v24[15] = 0;
            *((_BYTE *)v24 + 64) = 0;
          }
          else
          {
            v24 = 0;
          }
          v25 = *(int *)((char *)v16 + v22);
          v26 = v22 + 4;
          v24[14] = v25;
          v24[15] = *(int *)((char *)v16 + v26);
          v27 = *((_BYTE *)v16 + v26 + 4);
          LOBYTE(v44) = 0;
          *((_BYTE *)v24 + 64) = v27;
          v26 += 5;
          std::string::string(v41);
          LOBYTE(v44) = 3;
          std::string::insert(v41, 0, (char *)v16 + v26, v20 - 13);
          v21 = v26 + v20 - 13;
          std::string::operator=(v24 + 7, v41);
          std::string::string(v36, v24 + 7);
          v37 = v24;
          LOBYTE(v44) = 4;
          std::string::string(v38, v36);
          v39 = v37;
          LOBYTE(v44) = 5;
          sub_10008A67((int)v40, v38);
          LOBYTE(v44) = 4;
          std::string::~string(v38);
          LOBYTE(v44) = 3;
          std::string::~string(v36);
          LOBYTE(v44) = 0;
          if ( v21 + 4 >= NumberOfBytesRead )
            break;
          v20 = *(int *)((char *)v16 + v21);
          std::string::~string(v41);
          v19 = NumberOfBytesRead;
          if ( v20 + v21 > NumberOfBytesRead + i )
            goto LABEL_17;
        }
        std::string::~string(v41);
        v19 = NumberOfBytesRead;
LABEL_17:
        v9 = i;
      }
      v28 = v9 - v21;
      if ( v9 - v21 + v19 )
      {
        memcpy(v16, (char *)v16 + v21, v9 - v21 + v19);
        memset((char *)v16 + v28 + NumberOfBytesRead, 0, v21);
      }
      else
      {
        memset(v16, 0, v19 + v9);
      }
      v8 = v34;
      v32 -= NumberOfBytesRead;
      i = NumberOfBytesRead + v28;
      v9 = NumberOfBytesRead + v28;
      v15 = v32;
    }
  }
  v44 = -1;
  if ( !v17 )
    goto LABEL_3;
  v8[31] = 0;
  std::string::~string(&a2);
  return 1;
}
