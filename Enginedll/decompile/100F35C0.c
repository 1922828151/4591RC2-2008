/*
 * func-name: sub_100F35C0
 * func-address: 0x100f35c0
 * callers: 0x100f37e0
 * callees: 0x100e2700, 0x100f30c0, 0x100f6620, 0x100f7320, 0x101a24ac, 0x101a2534, 0x101a253a
 */

int __thiscall sub_100F35C0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  void *v3; // eax
  _DWORD *v4; // ebx
  int v5; // ecx
  void (__stdcall *v6)(_DWORD *, unsigned int *); // eax
  int v7; // ebp
  void (__stdcall *v8)(_DWORD *, int, _DWORD **); // eax
  void (__stdcall *v9)(_DWORD *, _DWORD, int *); // edx
  _DWORD *v10; // edi
  void *v11; // esi
  void *v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  _DWORD *v15; // eax
  void *v16; // edi
  _DWORD *v18; // [esp+34h] [ebp-3Ch]
  void *v19; // [esp+38h] [ebp-38h]
  int v20; // [esp+3Ch] [ebp-34h] BYREF
  unsigned int v21; // [esp+40h] [ebp-30h] BYREF
  int v22; // [esp+44h] [ebp-2Ch]
  int v23; // [esp+48h] [ebp-28h] BYREF
  int v24; // [esp+50h] [ebp-20h] BYREF
  _DWORD v25[4]; // [esp+54h] [ebp-1Ch] BYREF
  int v26; // [esp+6Ch] [ebp-4h]

  v2 = this;
  v23 = (int)this;
  v22 = 0;
  v19 = 0;
  v3 = operator new(0x5Cu);
  v24 = (int)v3;
  v26 = 0;
  if ( v3 )
    v18 = (_DWORD *)sub_100F7320(v3);
  else
    v18 = 0;
  v4 = a2;
  v5 = *a2;
  v24 = (int)v18;
  v6 = *(void (__stdcall **)(_DWORD *, unsigned int *))(v5 + 40);
  v26 = -1;
  v6(a2, &v21);
  v7 = 0;
  if ( !v21 )
    goto LABEL_17;
  while ( 1 )
  {
    a2 = 0;
    v8 = *(void (__stdcall **)(_DWORD *, int, _DWORD **))(*v4 + 44);
    v26 = 1;
    v8(v4, v7, &a2);
    (*(void (__stdcall **)(_DWORD *, _DWORD *))(*a2 + 32))(a2, v25);
    if ( !sub_100E2700(v25, dword_101C85FC) )
      break;
    v9 = *(void (__stdcall **)(_DWORD *, _DWORD, int *))(*a2 + 16);
    v10 = a2;
    v20 = 0;
    v9(a2, 0, &v20);
    if ( v20 )
    {
      v11 = operator new(v20 + 1);
      (*(void (__stdcall **)(_DWORD *, void *, int *))(*v10 + 16))(v10, v11, &v20);
      v19 = v11;
      v12 = v11;
      v2 = (_DWORD *)v23;
      std::string::operator=(v18, v12);
    }
    else
    {
      v19 = 0;
      std::string::operator=(v18, 0);
    }
LABEL_11:
    v26 = -1;
    if ( a2 )
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2);
    if ( ++v7 >= v21 )
      goto LABEL_17;
  }
  if ( !sub_100E2700(v25, dword_101C862C) )
    goto LABEL_11;
  v22 = sub_100F30C0(a2, v18);
  if ( v22 >= 0 )
    goto LABEL_11;
  v26 = -1;
  if ( a2 )
    (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2);
LABEL_17:
  v13 = v2[1];
  if ( v13 )
    v14 = (int)(v2[2] - v13) >> 2;
  else
    v14 = 0;
  if ( v13 && v14 < (int)(v2[3] - v13) >> 2 )
  {
    v15 = (_DWORD *)v2[2];
    *v15 = v18;
    v2[2] = v15 + 1;
  }
  else
  {
    v16 = (void *)v2[2];
    if ( v13 > (unsigned int)v16 )
      invalid_parameter_noinfo();
    sub_100F6620((int)&v23, (int)v2, v16, (int)&v24);
  }
  operator delete[](v19);
  return v22;
}
