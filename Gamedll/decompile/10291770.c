/*
 * func-name: sub_10291770
 * func-address: 0x10291770
 * callers: 0x10019119
 * callees: none
 */

int __thiscall sub_10291770(int this, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5, int a6, float a7)
{
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int result; // eax
  const wchar_t *v16; // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // ecx
  int v19; // edx
  const wchar_t *v20; // eax
  _DWORD *v21; // ecx

  CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 572), 0x5577C5D1u);
  *(_BYTE *)(*(_DWORD *)(this + 572) + 536) = 1;
  v8 = a2[15];
  if ( *a3 <= v8 )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 156))(
      *(_DWORD *)(this + 572),
      *(_DWORD *)(this + 164) + 4,
      v8 - *a3 + *a4 - 1);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 160))(
      *(_DWORD *)(this + 572),
      *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - 8,
      1);
    (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(a6, LODWORD(a7));
  }
  v9 = a2[15];
  if ( *a3 < v9 + 30 )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 156))(
      *(_DWORD *)(this + 572),
      *(_DWORD *)(this + 164) + 4,
      *a4 + v9 - *a3);
    v10 = *(_DWORD **)(this + 572);
    if ( v10[25] < *a4 )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*v10 + 156))(v10[24], *a4);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 160))(
      *(_DWORD *)(this + 572),
      1,
      a2[15] - *a3 + 30);
    if ( *a4 + *(_DWORD *)(*(_DWORD *)(this + 572) + 108) > a5 )
      (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 572) + 160))(
        *(_DWORD *)(*(_DWORD *)(this + 572) + 104),
        a5 - *a4);
    (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(a6, LODWORD(a7));
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 572) + 156))(
      *(_DWORD *)(this + 572),
      *(_DWORD *)(this + 172) - 4,
      *(_DWORD *)(*(_DWORD *)(this + 572) + 100));
    (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(a6, LODWORD(a7));
  }
  v11 = a2[15];
  if ( *a3 < v11 + 15 )
  {
    v12 = v11 - *a3 + *a4 + 15;
    if ( v12 <= a5 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 156))(
        *(_DWORD *)(this + 572),
        *(_DWORD *)(this + 164) + 4,
        v12);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 160))(
        *(_DWORD *)(this + 572),
        *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - 8,
        1);
      (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(a6, LODWORD(a7));
    }
  }
  v13 = a2[15];
  if ( v13 + 30 > *a3 )
  {
    v14 = v13 - *a3 + *a4 + 30;
    if ( v14 <= a5 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 156))(
        *(_DWORD *)(this + 572),
        *(_DWORD *)(this + 164) + 4,
        v14);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 160))(
        *(_DWORD *)(this + 572),
        *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - 8,
        1);
      (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(a6, LODWORD(a7));
    }
  }
  result = a2[16] + *(_DWORD *)(this + 628);
  if ( *a3 < result )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 180))(
      *(_DWORD *)(this + 576),
      0,
      -1,
      0);
    v16 = (const wchar_t *)std::wstring::c_str(a2);
    CREStatic::SetText(*(CREStatic **)(this + 576), v16);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 4);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 576) + 156))(
      *(_DWORD *)(this + 576),
      *(_DWORD *)(this + 164) + 8,
      a2[16] + *a4 - *a3);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 160))(
      *(_DWORD *)(this + 576),
      *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - 8,
      *(_DWORD *)(this + 628));
    v17 = *(_DWORD **)(this + 576);
    if ( *a3 <= a2[16] )
    {
      if ( *a4 + v17[27] <= a5 )
      {
LABEL_21:
        (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 576) + 20))(a6, LODWORD(a7));
        *a3 = a2[16] + *(_DWORD *)(this + 628);
        result = *(_DWORD *)(this + 576);
        *a4 = *(_DWORD *)(result + 100) + *(_DWORD *)(result + 108);
        goto LABEL_22;
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 0);
      v18 = *(_DWORD **)(this + 576);
      v19 = a5 - *a4;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(*v17 + 188))(v17, 8);
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 156))(
        *(_DWORD *)(*(_DWORD *)(this + 576) + 96),
        *a4);
      v18 = *(_DWORD **)(this + 576);
      v19 = a2[16] + v18[27] - *a3;
    }
    (*(void (__stdcall **)(_DWORD, int))(*v18 + 160))(v18[26], v19);
    goto LABEL_21;
  }
LABEL_22:
  if ( *a3 < *(_DWORD *)(this + 636) + a2[17] )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 180))(
      *(_DWORD *)(this + 576),
      0,
      -1,
      0);
    v20 = (const wchar_t *)std::wstring::c_str(a2 + 7);
    CREStatic::SetText(*(CREStatic **)(this + 576), v20);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 4);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 576) + 156))(
      *(_DWORD *)(this + 576),
      *(_DWORD *)(this + 164) + 8,
      a2[17] + *a4 - *a3);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 160))(
      *(_DWORD *)(this + 576),
      *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - 8,
      *(_DWORD *)(this + 628));
    v21 = *(_DWORD **)(this + 576);
    if ( *a3 <= a2[17] )
    {
      if ( *a4 + v21[27] > a5 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 0);
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
          *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
          a5 - *a4);
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(*v21 + 188))(v21, 8);
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 156))(
        *(_DWORD *)(*(_DWORD *)(this + 576) + 96),
        *a4);
      (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
        *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
        a2[17] + *(_DWORD *)(*(_DWORD *)(this + 576) + 108) - *a3);
    }
    result = (*(int (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 576) + 20))(a6, LODWORD(a7));
    *a3 = *(_DWORD *)(this + 636) + a2[17];
    *a4 = *(_DWORD *)(*(_DWORD *)(this + 576) + 100) + *(_DWORD *)(*(_DWORD *)(this + 576) + 108);
  }
  return result;
}
