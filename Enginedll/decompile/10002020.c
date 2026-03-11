/*
 * func-name: sub_10002020
 * func-address: 0x10002020
 * callers: 0x10002270, 0x100042c0
 * callees: 0x10001c10
 */

int __stdcall sub_10002020(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int Buffer,
        char *a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  FILE *v16; // ebx
  char *v17; // esi
  int v18; // eax
  int v19; // ebp
  unsigned int i; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // edi
  int j; // ebp
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char v31; // [esp-20h] [ebp-3Ch] BYREF
  int v32; // [esp-1Ch] [ebp-38h]
  int v33; // [esp-18h] [ebp-34h]
  int v34; // [esp-14h] [ebp-30h]
  int v35; // [esp-10h] [ebp-2Ch]
  int v36; // [esp-Ch] [ebp-28h]
  int v37; // [esp-8h] [ebp-24h]
  FILE *v38; // [esp-4h] [ebp-20h]
  int v39; // [esp+18h] [ebp-4h]

  v16 = (FILE *)Buffer;
  v38 = (FILE *)Buffer;
  Buffer = (int)&v31;
  v39 = 1;
  std::string::string(&v31, &a1);
  sub_10001C10(v31, v32, v33, v34, v35, v36, v37, v38);
  v17 = a9;
  v18 = *(_DWORD *)(a9 + 2235);
  v19 = 0;
  if ( v18 )
    Buffer = (*(_DWORD *)(a9 + 2239) - v18) / 28;
  else
    Buffer = 0;
  fwrite(&Buffer, 4u, 1u, v16);
  for ( i = 0; ; ++i )
  {
    v21 = *(_DWORD *)(v17 + 2235);
    if ( !v21 || i >= (*(_DWORD *)(v17 + 2239) - v21) / 28 )
      break;
    v22 = *(_DWORD *)(v17 + 2235);
    v38 = v16;
    if ( !v22 || i >= (*(_DWORD *)(v17 + 2239) - v22) / 28 )
      invalid_parameter_noinfo();
    v23 = v19 + *(_DWORD *)(v17 + 2235);
    a9 = &v31;
    std::string::string(&v31, v23);
    sub_10001C10(v31, v32, v33, v34, v35, v36, v37, v38);
    v19 += 28;
  }
  v24 = *(_DWORD *)(v17 + 2251);
  if ( v24 )
    Buffer = (*(_DWORD *)(v17 + 2255) - v24) / 28;
  else
    Buffer = 0;
  fwrite(&Buffer, 4u, 1u, v16);
  v25 = 0;
  for ( j = 0; ; j += 28 )
  {
    v27 = *(_DWORD *)(v17 + 2251);
    if ( !v27 || v25 >= (*(_DWORD *)(v17 + 2255) - v27) / 28 )
      break;
    v28 = *(_DWORD *)(v17 + 2251);
    v38 = v16;
    if ( !v28 || v25 >= (*(_DWORD *)(v17 + 2255) - v28) / 28 )
      invalid_parameter_noinfo();
    v29 = j + *(_DWORD *)(v17 + 2251);
    a9 = &v31;
    std::string::string(&v31, v29);
    sub_10001C10(v31, v32, v33, v34, v35, v36, v37, v38);
    ++v25;
  }
  v38 = v16;
  a9 = &v31;
  std::string::string(&v31, &a10);
  sub_10001C10(v31, v32, v33, v34, v35, v36, v37, v38);
  fwrite(v17, 0x8A7u, 1u, v16);
  LOBYTE(v39) = 0;
  std::string::~string(&a1);
  v39 = -1;
  return std::string::~string(&a10);
}
