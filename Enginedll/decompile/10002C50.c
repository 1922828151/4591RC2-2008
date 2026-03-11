/*
 * func-name: sub_10002C50
 * func-address: 0x10002c50
 * callers: 0x10003a50, 0x10006780, 0x100080a0
 * callees: 0x10001ca0, 0x100116a0, 0x101a2534
 */

char __stdcall sub_10002C50(int *Buffer, void **a2, FILE *Stream, _DWORD *a4, int a5)
{
  FILE *v5; // esi
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  char *v9; // eax
  _BYTE *v10; // edx
  char v11; // cl
  char *v12; // eax
  _BYTE *v13; // edx
  char v14; // cl
  _DWORD *v15; // eax
  int v16; // edi
  int v17; // ebp
  void *v18; // eax
  char *v19; // ebx
  int v20; // eax
  int v22[7]; // [esp+14h] [ebp-44h] BYREF
  int v23[7]; // [esp+30h] [ebp-28h] BYREF
  int v24; // [esp+54h] [ebp-4h]

  v5 = Stream;
  v6 = sub_10001CA0((int)v22, Stream);
  v24 = 0;
  std::string::operator=(a5, v6);
  v24 = -1;
  std::string::~string(v22);
  fread(Buffer, 4u, 1u, v5);
  v7 = a4;
  *a4 = 0;
  v8 = *Buffer;
  if ( *Buffer == 1 )
  {
    *v7 = 1;
    fread(*a2, 1u, 1u, v5);
    return 1;
  }
  switch ( v8 )
  {
    case 2:
    case 3:
      *v7 = 4;
      fread(*a2, 4u, 1u, v5);
      return 1;
    case 4:
      *v7 = 8;
      fread(*a2, 8u, 1u, v5);
      return 1;
    case 5:
      *v7 = 12;
      fread(*a2, 0xCu, 1u, v5);
      return 1;
    case 6:
      goto LABEL_27;
    case 11:
      sub_10001CA0((int)v22, v5);
      v24 = 1;
      *v7 = std::string::length(v22) + 2;
      v9 = (char *)std::string::c_str(v22);
      v10 = *a2;
      do
      {
        v11 = *v9;
        *v10++ = *v9++;
      }
      while ( v11 );
LABEL_18:
      v24 = -1;
      std::string::~string(v22);
      return 1;
    case 8:
      sub_10001CA0((int)v22, v5);
      v24 = 2;
      *v7 = std::string::length(v22) + 2;
      v12 = (char *)std::string::c_str(v22);
      v13 = *a2;
      do
      {
        v14 = *v12;
        *v13++ = *v12++;
      }
      while ( v14 );
      goto LABEL_18;
    case 13:
      Stream = 0;
      fread(&Stream, 4u, 1u, v5);
      v15 = operator new(0x10u);
      v16 = 0;
      if ( v15 )
      {
        v15[1] = 0;
        v15[2] = 0;
        v15[3] = 0;
        v17 = (int)v15;
      }
      else
      {
        v17 = 0;
      }
      v24 = -1;
      if ( (int)Stream > 0 )
      {
        do
        {
          v18 = (void *)sub_10001CA0((int)v22, v5);
          v24 = 4;
          sub_100116A0(v17, v18);
          v24 = -1;
          std::string::~string(v22);
          ++v16;
        }
        while ( v16 < (int)Stream );
      }
      *a2 = (void *)v17;
      return 1;
    case 12:
LABEL_27:
      *v7 = 16;
      fread(*a2, 0x10u, 1u, v5);
      return 1;
    case 9:
      v19 = (char *)*a2;
      v20 = sub_10001CA0((int)v23, v5);
      v24 = 5;
      std::string::operator=(v19 + 100, v20);
      v24 = -1;
      std::string::~string(v23);
      *v7 = 156;
      break;
  }
  return 1;
}
