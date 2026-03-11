/*
 * func-name: sub_1000E060
 * func-address: 0x1000e060
 * callers: 0x1000e370, 0x1000ee20
 * callees: 0x10013710, 0x10014910, 0x10015980, 0x100159a0, 0x10015a80, 0x10035300
 */

char __thiscall sub_1000E060(_DWORD *this, int a2, unsigned int *a3, int a4)
{
  _DWORD *v4; // ebx
  int (__thiscall ***v6)(_DWORD, int, int); // eax
  int v7; // eax
  int (__thiscall ***v8)(_DWORD, int, int); // eax
  int v9; // ebp
  int (__thiscall ***v10)(_DWORD, int, int); // eax
  int (__thiscall ***v11)(_DWORD, int, int); // eax
  unsigned int *v12; // ecx
  char *v13; // edx
  unsigned int *v14; // esi
  unsigned int *v15; // eax
  int v16; // ebp
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // ebp
  unsigned int v21; // esi
  unsigned int v22; // ecx
  unsigned int v23; // edi
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // eax
  int (__thiscall ***v27)(_DWORD, int, int); // eax
  void *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // [esp+2Ch] [ebp-38h]
  unsigned __int16 *v33; // [esp+30h] [ebp-34h]
  unsigned int *v34; // [esp+34h] [ebp-30h]
  int v35; // [esp+38h] [ebp-2Ch]
  int v36; // [esp+3Ch] [ebp-28h]
  _DWORD *Src; // [esp+40h] [ebp-24h]
  char *v38; // [esp+44h] [ebp-20h]
  int v39; // [esp+44h] [ebp-20h]
  _DWORD v41[6]; // [esp+4Ch] [ebp-18h] BYREF
  int v42; // [esp+6Ch] [ebp+8h]
  int i; // [esp+70h] [ebp+Ch]

  v4 = this;
  if ( !a2 || !a3 && !a4 )
    return sub_10013710(
             "EdgeList::CreateFacesToEdges: null parameter!",
             (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\EdgeList.cpp",
             149);
  if ( this[3] )
    return 1;
  v6 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v7 = (**v6)(v6, 12 * a2, 14);
  v4[3] = v7;
  if ( !v7 )
    return 0;
  v8 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v9 = (**v8)(v8, 12 * a2, 1);
  v35 = v9;
  if ( !v9 )
    return 0;
  v10 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v32 = (**v10)(v10, 12 * a2, 1);
  if ( !v32 )
    return 0;
  v11 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  Src = (_DWORD *)(**v11)(v11, 24 * a2, 1);
  if ( !Src )
    return 0;
  v12 = a3;
  v33 = (unsigned __int16 *)(a4 + 4);
  v13 = (char *)a3 - v9;
  v14 = (unsigned int *)(v9 + 8);
  v15 = (unsigned int *)(v32 + 4);
  v16 = v9 - v32;
  v34 = a3;
  v38 = v13;
  v36 = a2;
  while ( 1 )
  {
    if ( v12 )
    {
      v17 = *v34;
      v18 = *(unsigned int *)((char *)v14 + (_DWORD)v13 - 4);
      v19 = *(unsigned int *)((char *)v14 + (_DWORD)v13);
      goto LABEL_15;
    }
    if ( a4 )
    {
      v17 = *(v33 - 2);
      v18 = *(v33 - 1);
      v19 = *v33;
LABEL_15:
      if ( v17 >= v18 )
      {
        *(v14 - 2) = v18;
        *(v15 - 1) = v17;
      }
      else
      {
        *(v14 - 2) = v17;
        *(v15 - 1) = v18;
      }
      goto LABEL_21;
    }
    v17 = 0;
    v18 = 1;
    *(v14 - 2) = 0;
    v19 = 2;
    *(v15 - 1) = 1;
LABEL_21:
    if ( v18 >= v19 )
    {
      *(unsigned int *)((char *)v15 + v16) = v19;
      *v15 = v18;
    }
    else
    {
      *(unsigned int *)((char *)v15 + v16) = v18;
      *v15 = v19;
    }
    if ( v19 >= v17 )
    {
      *v14 = v17;
      v15[1] = v19;
    }
    else
    {
      *v14 = v19;
      v15[1] = v17;
    }
    v33 += 3;
    v34 += 3;
    v14 += 3;
    v15 += 3;
    if ( !--v36 )
      break;
    v13 = v38;
    v12 = a3;
  }
  v20 = v35;
  sub_10015980(v41);
  sub_10015A80(v32, 3 * a2, 0);
  v21 = 0;
  v39 = *(_DWORD *)(sub_10015A80(v35, 3 * a2, 0) + 4);
  *v4 = 0;
  v4[2] = a2;
  v42 = -1;
  for ( i = -1; v21 < 3 * a2; *(_DWORD *)(v4[3] + 4 * (v26 + v23)) = *v4 - 1 )
  {
    v22 = *(_DWORD *)(v39 + 4 * v21);
    v23 = 3 * (v22 / 3);
    v24 = *(_DWORD *)(v20 + 4 * v22);
    v25 = *(_DWORD *)(v32 + 4 * v22);
    v26 = *(_DWORD *)(v39 + 4 * v21) - v23;
    if ( v24 != v42 || v25 != i )
    {
      Src[2 * *v4] = v24;
      Src[2 * *v4 + 1] = v25;
      v4 = this;
      ++*this;
    }
    v20 = v35;
    v42 = v24;
    ++v21;
    i = v25;
  }
  v27 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v28 = (void *)(**v27)(v27, 8 * *v4, 7);
  v4[1] = v28;
  if ( !v28 )
  {
    sub_100159A0(v41);
    return 0;
  }
  memcpy_0(v28, Src, 8 * *v4);
  v29 = sub_10014910();
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v29 + 12))(v29, Src);
  v30 = sub_10014910();
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v30 + 12))(v30, v32);
  v31 = sub_10014910();
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 12))(v31, v20);
  sub_100159A0(v41);
  return 1;
}
