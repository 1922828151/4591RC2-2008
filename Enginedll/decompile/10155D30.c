/*
 * func-name: ?SetMaxItem@CItemHolder@@QAEXH@Z
 * func-address: 0x10155d30
 * callers: 0x100a27b0
 * callees: 0x1014fae0, 0x101585d0, 0x10158660, 0x101a2500, 0x101a2534
 */

void __thiscall CItemHolder::SetMaxItem(CItemHolder *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int v3; // ebp
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  void *v10; // ebp
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // esi
  int v20; // edx
  int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // edx
  int *v24; // eax
  void *v25; // esi
  int v26; // ecx
  int i; // edi
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // edx
  _DWORD *v36; // eax
  void *v37; // edi
  int v38; // [esp+0h] [ebp-20h]
  int v39; // [esp+4h] [ebp-1Ch]
  int v40; // [esp+8h] [ebp-18h] BYREF
  int v41[4]; // [esp+Ch] [ebp-14h] BYREF
  int v42; // [esp+1Ch] [ebp-4h]

  v42 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v41[3] = (int)&loc_101B4FDB;
  v41[2] = (int)ExceptionList;
  v3 = a2;
  v5 = (_DWORD *)((char *)this + 536);
  *((_DWORD *)this + 142) = a2;
  v6 = *((_DWORD *)this + 135);
  if ( v6 )
  {
    if ( v3 < (v5[2] - v6) >> 2 )
    {
      v7 = ((v5[2] - v6) >> 2) - 1;
      if ( v7 >= (int)v3 )
      {
        do
        {
          v8 = v5[1];
          if ( !v8 || v7 >= (unsigned int)((v5[2] - v8) >> 2) )
            invalid_parameter_noinfo();
          v9 = v5[1];
          v10 = *(void **)(v9 + 4 * v7);
          if ( v10 )
          {
            sub_1014FAE0(*(_DWORD **)(v9 + 4 * v7));
            operator delete(v10);
          }
          v11 = v5[1];
          if ( v11 && (v5[2] - v11) >> 2 )
            v5[2] -= 4;
          --v7;
        }
        while ( v7 >= a2 );
        v3 = a2;
      }
    }
  }
  v12 = v5[1];
  if ( v12 )
    v13 = (v5[2] - v12) >> 2;
  else
    v13 = 0;
  if ( v13 < v3 )
  {
    while ( 1 )
    {
      v14 = v5[1];
      v15 = v14 ? (v5[2] - v14) >> 2 : 0;
      if ( v15 == v3 )
        break;
      if ( v14 )
        v16 = (v5[2] - v14) >> 2;
      else
        v16 = 0;
      v17 = operator new(0x6Cu);
      v18 = (int)v17;
      v40 = (int)v17;
      v42 = 0;
      if ( v17 )
      {
        v17[1] = 0;
        v17[6] = 0;
        std::wstring::wstring(v17 + 7);
        LOBYTE(v42) = 1;
        std::wstring::wstring((void *)(v18 + 76));
        *(_BYTE *)(v18 + 104) = 0;
        *(_DWORD *)(v18 + 72) = -1;
        v38 = v18;
      }
      else
      {
        v38 = 0;
        v18 = 0;
      }
      *(_DWORD *)v18 = v16;
      v40 = v18;
      v19 = *((_DWORD *)this + 149);
      v20 = v16 % v19;
      v42 = -1;
      v39 = v16 / v19;
      v21 = *((_DWORD *)this + 145) + v16 % v19 * *((_DWORD *)this + 147);
      if ( v16 )
        v21 += v20 * *((_DWORD *)this + 143);
      SetRect(
        (LPRECT)(v38 + 8),
        v21,
        *((_DWORD *)this + 146) + v39 * (*((_DWORD *)this + 148) + *((_DWORD *)this + 144)),
        v21 + *((_DWORD *)this + 147),
        *((_DWORD *)this + 146) + v39 * (*((_DWORD *)this + 148) + *((_DWORD *)this + 144)) + *((_DWORD *)this + 148));
      v22 = v5[1];
      if ( v22 )
        v23 = (int)(v5[2] - v22) >> 2;
      else
        v23 = 0;
      if ( v22 && v23 < (int)(v5[3] - v22) >> 2 )
      {
        v24 = (int *)v5[2];
        v3 = a2;
        *v24 = v38;
        v5[2] = v24 + 1;
      }
      else
      {
        v25 = (void *)v5[2];
        if ( v22 > (unsigned int)v25 )
          invalid_parameter_noinfo();
        sub_101585D0((int)v41, (int)v5, v25, (int)&v40);
        v3 = a2;
      }
    }
  }
  v26 = *((_DWORD *)this + 139);
  if ( v26 )
  {
    if ( (*((_DWORD *)this + 140) - v26) >> 2 > v3 )
    {
      for ( i = ((*((_DWORD *)this + 140) - v26) >> 2) - 1; i >= (int)v3; --i )
      {
        v28 = *((_DWORD *)this + 139);
        if ( !v28 || i >= (unsigned int)((*((_DWORD *)this + 140) - v28) >> 2) )
          invalid_parameter_noinfo();
        v29 = *((_DWORD *)this + 139);
        if ( *(_DWORD *)(v29 + 4 * i) )
          operator delete(*(void **)(v29 + 4 * i));
        v30 = *((_DWORD *)this + 139);
        if ( v30 && (*((_DWORD *)this + 140) - v30) >> 2 )
          *((_DWORD *)this + 140) -= 4;
      }
    }
  }
  v31 = *((_DWORD *)this + 139);
  if ( v31 )
    v32 = (*((_DWORD *)this + 140) - v31) >> 2;
  else
    v32 = 0;
  if ( v32 < v3 )
  {
    while ( 1 )
    {
      v33 = *((_DWORD *)this + 139);
      v34 = v33 ? (int)(*((_DWORD *)this + 140) - v33) >> 2 : 0;
      if ( v34 == v3 )
        break;
      v35 = *((_DWORD *)this + 139);
      a2 = 0;
      if ( v33 )
        v33 = (int)(*((_DWORD *)this + 140) - v33) >> 2;
      if ( v35 && v33 < (int)(*((_DWORD *)this + 141) - v35) >> 2 )
      {
        v36 = (_DWORD *)*((_DWORD *)this + 140);
        *v36 = 0;
        *((_DWORD *)this + 140) = v36 + 1;
      }
      else
      {
        v37 = (void *)*((_DWORD *)this + 140);
        if ( v35 > (unsigned int)v37 )
          invalid_parameter_noinfo();
        sub_10158660((int)v41, (int)this + 552, v37, (int)&a2);
      }
    }
  }
}
