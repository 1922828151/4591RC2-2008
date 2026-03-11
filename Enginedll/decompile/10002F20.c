/*
 * func-name: sub_10002F20
 * func-address: 0x10002f20
 * callers: 0x10003130, 0x10005d50
 * callees: 0x10001ca0, 0x1000e9c0
 */

char __stdcall sub_10002F20(FILE *Buffer, char *a2)
{
  FILE *v2; // ebp
  int v3; // edi
  int v4; // ecx
  char *v5; // ebx
  char *v6; // esi
  unsigned int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int *v11; // ebx
  int v12; // edi
  char *v13; // esi
  unsigned int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int *v18; // ebx
  int v19; // eax
  int v21; // [esp-1Ch] [ebp-74h] BYREF
  int v22; // [esp-18h] [ebp-70h]
  int v23; // [esp-14h] [ebp-6Ch]
  int v24; // [esp-10h] [ebp-68h]
  int v25; // [esp-Ch] [ebp-64h]
  int v26; // [esp-8h] [ebp-60h]
  int v27; // [esp-4h] [ebp-5Ch]
  int *v28; // [esp+10h] [ebp-48h]
  int v29[7]; // [esp+14h] [ebp-44h] BYREF
  int v30[7]; // [esp+30h] [ebp-28h] BYREF
  int v31; // [esp+54h] [ebp-4h]

  v2 = Buffer;
  sub_10001CA0((int)v30, Buffer);
  v31 = 0;
  Buffer = 0;
  fread(&Buffer, 4u, 1u, v2);
  v3 = (int)Buffer;
  v21 = v4;
  v28 = &v21;
  std::string::string(&v21);
  v5 = a2;
  v6 = a2 + 2231;
  sub_1000E9C0((int)(a2 + 2231), v3, v21, v22, v23, v24, v25, v26, v27);
  v7 = 0;
  if ( (int)Buffer > 0 )
  {
    v28 = 0;
    do
    {
      v8 = sub_10001CA0((int)v29, v2);
      v9 = *((_DWORD *)v6 + 1);
      LOBYTE(v31) = 1;
      if ( !v9 || v7 >= (*((_DWORD *)v6 + 2) - v9) / 28 )
        invalid_parameter_noinfo();
      v10 = *((_DWORD *)v6 + 1);
      v27 = v8;
      v11 = v28;
      std::string::operator=((char *)v28 + v10, v27);
      LOBYTE(v31) = 0;
      std::string::~string(v29);
      ++v7;
      v28 = v11 + 7;
    }
    while ( (int)v7 < (int)Buffer );
    v5 = a2;
  }
  Buffer = 0;
  fread(&Buffer, 4u, 1u, v2);
  v12 = (int)Buffer;
  v28 = &v21;
  std::string::string(&v21);
  v13 = v5 + 2247;
  sub_1000E9C0((int)(v5 + 2247), v12, v21, v22, v23, v24, v25, v26, v27);
  v14 = 0;
  if ( (int)Buffer > 0 )
  {
    v28 = 0;
    do
    {
      v15 = sub_10001CA0((int)v29, v2);
      v16 = *((_DWORD *)v13 + 1);
      LOBYTE(v31) = 2;
      if ( !v16 || v14 >= (*((_DWORD *)v13 + 2) - v16) / 28 )
        invalid_parameter_noinfo();
      v17 = *((_DWORD *)v13 + 1);
      v27 = v15;
      v18 = v28;
      std::string::operator=((char *)v28 + v17, v27);
      LOBYTE(v31) = 0;
      std::string::~string(v29);
      ++v14;
      v28 = v18 + 7;
    }
    while ( (int)v14 < (int)Buffer );
    v5 = a2;
  }
  v19 = sub_10001CA0((int)v29, v2);
  LOBYTE(v31) = 3;
  std::string::operator=(v5 + 2263, v19);
  LOBYTE(v31) = 0;
  std::string::~string(v29);
  fread(v5, 0x8A7u, 1u, v2);
  v31 = -1;
  std::string::~string(v30);
  return 1;
}
