/*
 * func-name: sub_1000B5E0
 * func-address: 0x1000b5e0
 * callers: 0x1000b090, 0x1000c450
 * callees: 0x10008ae0, 0x1004e870, 0x1004e98e, 0x1004f112
 */

int __usercall sub_1000B5E0@<eax>(int a1@<ebx>, int a2, int a3)
{
  unsigned int v3; // ecx
  int result; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  int v8; // esi
  rsize_t v9; // eax
  char *v10; // ecx
  bool v11; // zf
  int v12; // esi
  rsize_t v13; // edx
  char *v14; // esi
  char *v15; // edi
  unsigned int v16; // ecx
  int v17; // ebp
  int v18; // eax
  int v19; // esi
  rsize_t v20; // eax
  char *v21; // esi
  unsigned int v22; // [esp+Ch] [ebp-18h]
  char *v23; // [esp+10h] [ebp-14h]
  char *Destination; // [esp+14h] [ebp-10h]
  _BYTE pExceptionObject[12]; // [esp+18h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v22 = 1;
  if ( v3 == 0xFFFFFFF )
    return sub_1000BB70(a2, a3);
  v5 = v3 >> 1;
  if ( v3 >> 1 >= 8 )
  {
    if ( v5 <= 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = 8;
  }
  if ( v3 <= 0xFFFFFFF - v5 )
    v22 = v5;
LABEL_8:
  v6 = *(_DWORD *)(a1 + 12) >> 2;
  v7 = v22 + v3;
  if ( v7 )
  {
    if ( 0xFFFFFFFF / v7 < 4 )
    {
      sub_10008AE0((std::exception *)pExceptionObject, 0);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v7 = 0;
  }
  v23 = (char *)operator new(4 * v7);
  v8 = 4 * v6;
  v9 = 4 * ((int)(4 * *(_DWORD *)(a1 + 8) - 4 * v6) >> 2);
  v10 = &v23[4 * v6 + v9];
  Destination = v10;
  if ( (int)(4 * *(_DWORD *)(a1 + 8) - 4 * v6) >> 2 )
  {
    memmove_s(&v23[4 * v6], v9, (const void *const)(4 * v6 + *(_DWORD *)(a1 + 4)), v9);
    v10 = Destination;
  }
  if ( v6 > v22 )
  {
    v17 = 4 * v22;
    v18 = (int)(4 * v22) >> 2;
    if ( v18 )
      memmove_s(v10, 4 * v18, *(const void *const *)(a1 + 4), 4 * v18);
    v19 = (v8 - v17) >> 2;
    v11 = v19 == 0;
    v20 = 4 * v19;
    v21 = &v23[4 * v19];
    if ( !v11 )
      memmove_s(v23, v20, (const void *const)(*(_DWORD *)(a1 + 4) + v17), v20);
    v16 = v22;
    v15 = v21;
  }
  else
  {
    v12 = v8 >> 2;
    v11 = v12 == 0;
    v13 = 4 * v12;
    v14 = &v10[4 * v12];
    if ( !v11 )
      memmove_s(v10, v13, *(const void *const *)(a1 + 4), v13);
    if ( v22 != v6 )
      memset(v14, 0, 4 * (v22 - v6));
    if ( !v6 )
      goto LABEL_27;
    v15 = v23;
    v16 = v6;
  }
  memset(v15, 0, 4 * v16);
LABEL_27:
  result = *(_DWORD *)(a1 + 4);
  if ( result )
    result = operator delete(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 8) += v22;
  *(_DWORD *)(a1 + 4) = v23;
  return result;
}
