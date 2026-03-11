/*
 * func-name: sub_10291F20
 * func-address: 0x10291f20
 * callers: 0x10009791
 * callees: 0x10011a4f, 0x10019119, 0x102c9d62
 */

unsigned int __thiscall sub_10291F20(int this, int a2, unsigned int *a3, int *a4, int a5, int a6, float a7)
{
  unsigned int *v7; // ebp
  unsigned int result; // eax
  int v10; // eax
  int v11; // ebp
  const wchar_t *v12; // eax
  int v13; // ecx
  int v14; // ebp
  signed int v15; // ebp
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  const wchar_t *v20; // eax
  unsigned int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  unsigned int *v25; // ebp
  GUISystem *v26; // eax
  int v27; // eax
  unsigned int v28; // [esp+12Ch] [ebp-54h]
  int v29; // [esp+12Ch] [ebp-54h]
  int j; // [esp+12Ch] [ebp-54h]
  unsigned int i; // [esp+134h] [ebp-4Ch]
  struct tagRECT rc; // [esp+13Ch] [ebp-44h] BYREF
  POINT v33; // [esp+14Ch] [ebp-34h] BYREF
  wchar_t Buffer[20]; // [esp+154h] [ebp-2Ch] BYREF

  v7 = a3;
  result = *(_DWORD *)(a2 + 44) + *(_DWORD *)(this + 684);
  if ( (int)*a3 < (int)result )
  {
    v28 = result - *a3;
    if ( (int)(*a4 + v28) > a5 )
      v28 = a5 - *a4;
    CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 572), 0x5577C5D1u);
    *(_BYTE *)(*(_DWORD *)(this + 572) + 536) = 1;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 572) + 156))(
      *(_DWORD *)(this + 572),
      *(_DWORD *)(this + 164) + 4,
      *a4);
    (*(void (__thiscall **)(_DWORD, int, unsigned int))(**(_DWORD **)(this + 572) + 160))(
      *(_DWORD *)(this + 572),
      *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - 8,
      v28);
    (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 572) + 20))(a6, LODWORD(a7));
    CREElement::SetTexture((CREElement *)(*(_DWORD *)(this + 580) + 788), *(_DWORD *)(a2 + 88));
    (*(void (__thiscall **)(_DWORD, int, unsigned int))(**(_DWORD **)(this + 580) + 156))(
      *(_DWORD *)(this + 580),
      *(_DWORD *)(this + 164) + 4,
      *(_DWORD *)(a2 + 44) + *a4 - *a3);
    v10 = *(_DWORD *)(a2 + 120);
    if ( v10 && *(_DWORD *)(a2 + 124) )
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 580) + 160))(
        *(_DWORD *)(this + 580),
        v10,
        *(_DWORD *)(a2 + 124));
    else
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 580) + 160))(
        *(_DWORD *)(this + 580),
        *(_DWORD *)(this + 656),
        *(_DWORD *)(this + 660));
    SetRect(
      &rc,
      *(_DWORD *)(this + 164),
      *a4,
      *(_DWORD *)(this + 172),
      *a4 + *(_DWORD *)(a2 + 44) + *(_DWORD *)(this + 660) - *a3);
    if ( a5 < rc.bottom )
      rc.bottom = a5;
    (*(void (__stdcall **)(int, _DWORD, struct tagRECT *))(**(_DWORD **)(this + 580) + 168))(a6, LODWORD(a7), &rc);
    result = *(_DWORD *)(a2 + 48);
    if ( (int)*a3 < (int)(result + *(_DWORD *)(this + 620)) )
    {
      v11 = result + *a4 - *a3;
      (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 180))(
        *(_DWORD *)(this + 576),
        0,
        -1,
        0);
      v12 = (const wchar_t *)std::wstring::c_str(a2);
      CREStatic::SetText(*(CREStatic **)(this + 576), v12);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 576) + 156))(
        *(_DWORD *)(this + 576),
        *(_DWORD *)(this + 164) + *(_DWORD *)(this + 688) + 4,
        v11);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 4);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 160))(
        *(_DWORD *)(this + 576),
        *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - *(_DWORD *)(this + 688) - 4,
        *(_DWORD *)(this + 620));
      if ( v11 >= *a4 )
      {
        if ( v11 + *(_DWORD *)(this + 620) > a5 )
        {
          (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
            *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
            a5 - v11);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 0);
        }
      }
      else
      {
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 156))(
          *(_DWORD *)(*(_DWORD *)(this + 576) + 96),
          *a4);
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
          *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
          v11 + *(_DWORD *)(*(_DWORD *)(this + 576) + 108) - *a4);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 8);
      }
      result = (*(int (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 576) + 20))(a6, LODWORD(a7));
      v7 = a3;
    }
    if ( (int)*v7 < *(_DWORD *)(a2 + 52) + *(_DWORD *)(this + 620) )
    {
      sub_10011A4F(Buffer, (size_t)L"%d", *(_DWORD *)(a2 + 116));
      v13 = *(_DWORD *)(this + 576);
      v14 = *(_DWORD *)(a2 + 52) + *a4 - *a3;
      if ( *(int *)(a2 + 116) <= 0 )
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 180))(v13, 0, *(_DWORD *)(this + 652), 0);
      else
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 180))(v13, 0, *(_DWORD *)(this + 648), 0);
      CREStatic::SetText(*(CREStatic **)(this + 576), Buffer);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 576) + 156))(
        *(_DWORD *)(this + 576),
        *(_DWORD *)(this + 164) + *(_DWORD *)(this + 692) + 4,
        v14);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 4);
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 160))(
        *(_DWORD *)(this + 576),
        *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164) - *(_DWORD *)(this + 692) - 4,
        *(_DWORD *)(this + 620));
      if ( v14 >= *a4 )
      {
        if ( v14 + *(_DWORD *)(this + 620) > a5 )
        {
          (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
            *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
            a5 - v14);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 0);
        }
      }
      else
      {
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 156))(
          *(_DWORD *)(*(_DWORD *)(this + 576) + 96),
          *a4);
        (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 160))(
          *(_DWORD *)(*(_DWORD *)(this + 576) + 104),
          v14 + *(_DWORD *)(*(_DWORD *)(this + 576) + 108) - *a4);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 8);
      }
      result = (*(int (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 576) + 20))(a6, LODWORD(a7));
      v7 = a3;
    }
    *a4 += *(_DWORD *)(this + 684) + *(_DWORD *)(a2 + 44) - *v7;
    *v7 = *(_DWORD *)(this + 684) + *(_DWORD *)(a2 + 44);
  }
  if ( *(_BYTE *)(a2 + 108) )
  {
    v15 = *(_DWORD *)(a2 + 56);
    for ( i = 0; ; ++i )
    {
      v16 = *(_DWORD *)(a2 + 32);
      if ( !v16 )
        break;
      if ( i >= (*(_DWORD *)(a2 + 36) - v16) / 28 )
        break;
      v17 = v15 + *(_DWORD *)(a2 + 64);
      if ( v17 > (int)*a3 )
        break;
      v15 = v17 + 3;
    }
    *a4 += 2;
    if ( *a4 < a5 )
    {
      v29 = 28 * i;
      do
      {
        v18 = *(_DWORD *)(a2 + 32);
        if ( !v18 || i >= (*(_DWORD *)(a2 + 36) - v18) / 28 )
          break;
        (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 180))(
          *(_DWORD *)(this + 576),
          0,
          -1,
          0);
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 576) + 156))(
          *(_DWORD *)(this + 576),
          *(_DWORD *)(this + 164),
          *a4);
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 0);
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 576) + 160))(
          *(_DWORD *)(this + 576),
          *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
          *(_DWORD *)(a2 + 64));
        if ( v15 < (int)*a3 )
        {
          (*(void (__thiscall **)(_DWORD, int, unsigned int))(**(_DWORD **)(this + 576) + 160))(
            *(_DWORD *)(this + 576),
            *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
            v15 + *(_DWORD *)(a2 + 64) - *a3);
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 8);
        }
        if ( *a4 + *(_DWORD *)(a2 + 64) > a5 )
        {
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 576) + 160))(
            *(_DWORD *)(this + 576),
            *(_DWORD *)(this + 172) - *(_DWORD *)(this + 164),
            a5 - *a4);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 576) + 188))(*(_DWORD *)(this + 576), 0);
        }
        v19 = *(_DWORD *)(a2 + 32);
        if ( !v19 || i >= (*(_DWORD *)(a2 + 36) - v19) / 28 )
          _invalid_parameter_noinfo();
        v20 = (const wchar_t *)std::wstring::c_str(v29 + *(_DWORD *)(a2 + 32));
        CREStatic::SetText(*(CREStatic **)(this + 576), v20);
        (*(void (__stdcall **)(int, _DWORD))(**(_DWORD **)(this + 576) + 20))(a6, LODWORD(a7));
        ++i;
        v29 += 28;
        *a4 = *(_DWORD *)(*(_DWORD *)(this + 576) + 108) + *(_DWORD *)(*(_DWORD *)(this + 576) + 100) + 3;
        v15 += *(_DWORD *)(a2 + 64) + 3;
        *a3 = v15;
      }
      while ( *a4 < a5 );
    }
    v21 = 0;
    for ( j = 0; ; j += 76 )
    {
      result = *(_DWORD *)(a2 + 76);
      if ( !result )
        break;
      result = (int)(*(_DWORD *)(a2 + 80) - result) / 76;
      if ( v21 >= result || *a4 >= a5 )
        break;
      v22 = *(_DWORD *)(a2 + 76);
      if ( !v22 || v21 >= (*(_DWORD *)(a2 + 80) - v22) / 76 )
        _invalid_parameter_noinfo();
      sub_10019119(j + *(_DWORD *)(a2 + 76), (int)a3, (int)a4, a5, a6, a7);
      v23 = *(_DWORD *)(a2 + 76);
      if ( v23 )
        v23 = (*(_DWORD *)(a2 + 80) - v23) / 76;
      if ( v21 != v23 - 1 )
      {
        *a4 += 2;
        *a3 += 2;
      }
      ++v21;
    }
    v24 = *(_DWORD *)(this + 644);
    if ( v24 )
    {
      v25 = a3;
      result = *a3;
      if ( (int)*a3 < *(_DWORD *)(a2 + 60) + *(_DWORD *)(v24 + 108) )
      {
        (*(void (__thiscall **)(_DWORD, int, unsigned int))(**(_DWORD **)(this + 644) + 156))(
          *(_DWORD *)(this + 644),
          *(_DWORD *)(this + 164) + 104,
          *(_DWORD *)(a2 + 60) + *a4 - result);
        v25 = a3;
        SetRect(
          &rc,
          *(_DWORD *)(this + 164),
          *a4,
          *(_DWORD *)(this + 172),
          *a4 + *(_DWORD *)(a2 + 60) + *(_DWORD *)(*(_DWORD *)(this + 644) + 108) - *a3);
        if ( a5 < rc.bottom )
          rc.bottom = a5;
        v26 = (GUISystem *)GUISystem::Instance(&v33);
        GUISystem::GetLogicMousePos(v26);
        v27 = *(_DWORD *)(this + 112);
        v33.x -= *(_DWORD *)(v27 + 692);
        v33.y -= *(_DWORD *)(v27 + 696);
        if ( PtInRect(&rc, v33) && *(_BYTE *)(this + 696) )
          (*(void (__thiscall **)(_DWORD, int, _DWORD, LONG, LONG, LONG, LONG, int))(**(_DWORD **)(this + 644) + 200))(
            *(_DWORD *)(this + 644),
            a6,
            LODWORD(a7),
            rc.left,
            rc.top,
            rc.right,
            rc.bottom,
            5);
        else
          (*(void (__thiscall **)(_DWORD, int, _DWORD, LONG, LONG, LONG, LONG))(**(_DWORD **)(this + 644) + 16))(
            *(_DWORD *)(this + 644),
            a6,
            LODWORD(a7),
            rc.left,
            rc.top,
            rc.right,
            rc.bottom);
        *a4 += *(_DWORD *)(a2 + 60) + *(_DWORD *)(*(_DWORD *)(this + 644) + 108) - *a3;
        result = *(_DWORD *)(a2 + 60) + *(_DWORD *)(*(_DWORD *)(this + 644) + 108);
        *a3 = result;
      }
      *a4 += 11;
      *v25 += 11;
    }
  }
  return result;
}
