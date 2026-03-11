/*
 * func-name: ?SetPic@CHotZonePic@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100c3910
 * callers: 0x1014a750
 * callees: 0x100a5d90, 0x100b5280, 0x100b5710, 0x1017a280, 0x101a2500, 0x101a2534
 */

_DWORD *__thiscall CHotZonePic::SetPic(int this, int a2, int *a3)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  signed int *v5; // eax
  int v6; // ebx
  _BYTE *v7; // eax
  int v8; // eax
  bool v9; // cf
  int v10; // eax
  int v11; // ebp
  int *v12; // eax
  _DWORD *result; // eax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  _BYTE v17[28]; // [esp+4h] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v18; // [esp+20h] [ebp-Ch]
  void *v19; // [esp+24h] [ebp-8h]
  int v20; // [esp+28h] [ebp-4h]

  v20 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v19 = &loc_101ACB0D;
  v18 = ExceptionList;
  v5 = *(signed int **)(this + 532);
  v6 = 0;
  if ( v5 )
  {
    CREDialog::RemoveTexture(*(CREDialog **)(this + 112), *v5);
    if ( *(_DWORD *)(this + 532) )
    {
      operator delete(*(void **)(this + 532));
      *(_DWORD *)(this + 532) = 0;
    }
  }
  v7 = operator new(0xC4u);
  if ( v7 )
  {
    v7[28] = 0;
    *(_DWORD *)v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  *(_DWORD *)(this + 532) = v7;
  v8 = sub_1017A280(v17, a2);
  v9 = *(_DWORD *)(v8 + 24) < 8u;
  v20 = 0;
  if ( v9 )
    v10 = v8 + 4;
  else
    v10 = *(_DWORD *)(v8 + 4);
  v11 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v10);
  v20 = -1;
  std::wstring::~wstring(v17);
  if ( a3 )
  {
    v12 = *(int **)(this + 532);
    *v12 = v11;
    v12[3] = *a3;
    v12[4] = a3[1];
    v12[5] = a3[2];
    v12[6] = a3[3];
    REBlendColor::Init((REBlendColor *)(v12 + 9), 0xFFFFFFFF, 0xC8808080, 0);
    *(_DWORD *)(this + 608) = *a3;
    *(_DWORD *)(this + 612) = a3[1];
    *(_DWORD *)(this + 616) = a3[2];
    *(_DWORD *)(this + 620) = a3[3];
    return (_DWORD *)SetRect((LPRECT)(this + 592), 0, 0, a3[2] - *a3, a3[3] - a3[1]);
  }
  else
  {
    v14 = *(_DWORD *)(this + 112);
    if ( REGetGlobalDialogResourceManager() )
    {
      v15 = *(_DWORD *)(*(_DWORD *)(v14 + 740) + 4 * v11);
      v6 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v15);
    }
    v16 = *(_DWORD *)(this + 532);
    *(_DWORD *)v16 = v11;
    SetRectEmpty((LPRECT)(v16 + 12));
    REBlendColor::Init((REBlendColor *)(v16 + 36), 0xFFFFFFFF, 0xC8808080, 0);
    SetRect((LPRECT)(*(_DWORD *)(this + 532) + 12), 0, 0, *(_DWORD *)(v6 + 524), *(_DWORD *)(v6 + 528));
    result = *(_DWORD **)(this + 532);
    *(_DWORD *)(this + 608) = result[3];
    *(_DWORD *)(this + 612) = result[4];
    *(_DWORD *)(this + 616) = result[5];
    *(_DWORD *)(this + 620) = result[6];
    *(_DWORD *)(this + 592) = result[3];
    *(_DWORD *)(this + 596) = result[4];
    *(_DWORD *)(this + 600) = result[5];
    *(_DWORD *)(this + 604) = result[6];
  }
  return result;
}
