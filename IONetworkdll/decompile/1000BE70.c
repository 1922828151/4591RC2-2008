/*
 * func-name: sub_1000BE70
 * func-address: 0x1000be70
 * callers: 0x1000bc90
 * callees: 0x1000b040, 0x1000b090, 0x1000b1e0, 0x1000b350, 0x1000b800, 0x1000b850, 0x1000b880, 0x1000bb20, 0x1000bd90, 0x1000be00, 0x1000c450, 0x1000c4d0, 0x1000c520, 0x1000c590, 0x1004f112
 */

int __stdcall sub_1000BE70(int a1, int a2, int a3, int *a4, int a5, int a6, int *a7, int a8, int a9, int *a10, int a11)
{
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // edi
  int v17; // esi
  int v18; // eax
  int *j; // edi
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // esi
  _DWORD *v25; // eax
  int v26; // eax
  unsigned int i; // edi
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // edx
  unsigned int v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // esi
  int v35; // edi
  int v37; // [esp-24h] [ebp-6Ch] BYREF
  int v38; // [esp-20h] [ebp-68h]
  int *v39; // [esp-1Ch] [ebp-64h]
  int v40; // [esp-18h] [ebp-60h] BYREF
  int v41; // [esp-14h] [ebp-5Ch]
  int *v42; // [esp-10h] [ebp-58h]
  int v43; // [esp-Ch] [ebp-54h] BYREF
  int v44; // [esp-8h] [ebp-50h]
  int *v45; // [esp-4h] [ebp-4Ch]
  int v46; // [esp+0h] [ebp-48h] BYREF
  int v47; // [esp+10h] [ebp-38h] BYREF
  int v48; // [esp+14h] [ebp-34h]
  int *v49; // [esp+18h] [ebp-30h]
  int v50; // [esp+1Ch] [ebp-2Ch] BYREF
  int v51; // [esp+20h] [ebp-28h]
  unsigned int v52; // [esp+24h] [ebp-24h]
  int *v53; // [esp+28h] [ebp-20h]
  int v54; // [esp+2Ch] [ebp-1Ch]
  int v55; // [esp+30h] [ebp-18h]
  unsigned int v56; // [esp+34h] [ebp-14h]
  int *v57; // [esp+38h] [ebp-10h]
  int v58; // [esp+44h] [ebp-4h]

  v57 = &v46;
  v11 = *(_DWORD *)(a1 + 12);
  if ( v11 > v11 + *(_DWORD *)(a1 + 16) )
    invalid_parameter_noinfo();
  if ( !a3 || a3 != a1 )
    invalid_parameter_noinfo();
  v12 = (unsigned int)a4 - v11;
  a4 = (int *)v12;
  v13 = *(_DWORD *)(a1 + 16);
  v14 = v13 - v12;
  v53 = (int *)(v13 - v12);
  v54 = v13;
  if ( !a9 || a9 != a6 )
    invalid_parameter_noinfo();
  if ( a7 > a10 )
  {
    v55 = (char *)a10 - (char *)a7;
    v15 = (char *)a10 - (char *)a7;
  }
  else
  {
    v15 = (char *)a10 - (char *)a7;
    v55 = (char *)a10 - (char *)a7;
  }
  if ( v12 >= v14 )
  {
    v58 = 2;
    if ( v14 < v15 )
    {
      v47 = 0;
      v48 = a6;
      v49 = a7;
      sub_1000C590();
      v50 = 0;
      v51 = v48;
      v52 = (unsigned int)v49;
      while ( sub_1000B1E0((int)&v50, (int)&a8) )
      {
        v26 = sub_1000B800((int)&v50);
        sub_1000B090(a1, v26);
        sub_1000B850((int)&v50);
      }
      for ( i = 0; ; ++i )
      {
        v56 = i;
        if ( i >= (unsigned int)v53 )
          break;
        v45 = (int *)((char *)a4 + i);
        sub_1000B350(a1, &a8);
        v28 = sub_1000C520(v45);
        sub_1000B090(a1, v28);
      }
      a10 = &v43;
      v42 = a4;
      v29 = sub_1000B350(a1, &a2);
      sub_1000B880((int)v29, &v43, (int)v42);
      a10 = &v40;
      v40 = 0;
      v41 = v48;
      v30 = (int)v49;
      goto LABEL_41;
    }
    v31 = 0;
    v56 = 0;
    while ( v31 < v15 )
    {
      v45 = (int *)(v12 + v14 + v31 - v15);
      sub_1000B350(a1, &v47);
      v32 = sub_1000C520(v45);
      sub_1000B090(a1, v32);
      ++v56;
      v15 = v55;
      v12 = (unsigned int)a4;
      v31 = v56;
    }
    v33 = sub_1000B350(a1, &a2);
    sub_1000B880((int)v33, &v47, v12);
    a4 = &v43;
    sub_1000B880((int)&v47, &v43, v14);
    a4 = &v40;
    sub_1000B880((int)&v47, &v50, v14);
    sub_1000C4D0(&v40);
    a4 = &v37;
    v34 = v48;
    v35 = (int)v49;
    sub_1000BD90((int)&a2, 0, v48, (int)v49, v40, v41, (int)v42, v43, v44, (int)v45);
    a4 = &v43;
    v43 = 0;
    v44 = v34;
    v45 = (int *)v35;
LABEL_40:
    v40 = 0;
    v41 = a9;
    v30 = (int)a10;
    a4 = &v40;
LABEL_41:
    v42 = (int *)v30;
    v37 = 0;
    v38 = a6;
    v39 = a7;
    a10 = &v37;
    return sub_1000BE00((int)&a5, v37, v38, (int)v39, v40, v41, (int)v42, v43, v44, (int)v45);
  }
  v58 = 0;
  v16 = v15;
  if ( v12 >= v15 )
  {
    while ( 1 )
    {
      v56 = v16;
      if ( !v16 )
        break;
      sub_1000B350(a1, &v47);
      v22 = sub_1000C520(v15 - 1);
      sub_1000C450(v22);
      --v16;
      v15 = v55;
    }
    v23 = sub_1000B350(a1, &v50);
    sub_1000B880((int)v23, &v47, v15);
    v43 = 0;
    v44 = v48;
    v45 = v49;
    v53 = &v40;
    v24 = (int)a4;
    sub_1000B880((int)&v47, &v40, (int)a4);
    a4 = &v37;
    sub_1000B880((int)&v47, &v37, v55);
    sub_1000BE00((int)&a2, v37, v38, (int)v39, v40, v41, (int)v42, v43, v44, (int)v45);
    a4 = &v43;
    v42 = (int *)v24;
    v25 = sub_1000B350(a1, &v47);
    sub_1000B880((int)v25, &v43, (int)v42);
    goto LABEL_40;
  }
  v47 = 0;
  v48 = a6;
  v49 = a7;
  sub_1000C590();
  v50 = 0;
  v51 = v48;
  v52 = (unsigned int)v49;
  while ( sub_1000B1E0((int)&a5, (int)&v50) )
  {
    v17 = v51;
    if ( !v51 )
      invalid_parameter_noinfo();
    if ( v52 <= *(_DWORD *)(v17 + 12) )
      invalid_parameter_noinfo();
    --v52;
    v18 = sub_1000B800((int)&v50);
    sub_1000C450(v18);
  }
  for ( j = a4; ; j = (int *)((char *)j - 1) )
  {
    v56 = (unsigned int)j;
    if ( !j )
      break;
    sub_1000B350(a1, &a5);
    v20 = sub_1000C520(v15 - 1);
    sub_1000C450(v20);
    v15 = v55;
  }
  a7 = &v43;
  v21 = sub_1000B350(a1, &a2);
  sub_1000B880((int)v21, &v43, v15);
  v40 = 0;
  v41 = a9;
  v42 = a10;
  a7 = &v37;
  v37 = 0;
  v38 = v48;
  v39 = v49;
  return sub_1000BE00((int)&a5, v37, v38, (int)v39, v40, v41, (int)v42, v43, v44, (int)v45);
}
