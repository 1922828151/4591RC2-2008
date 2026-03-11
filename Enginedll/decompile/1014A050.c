/*
 * func-name: ?AddDialog@CDlgMgr@@QAE_NPAVCTYDialog@@@Z
 * func-address: 0x1014a050
 * callers: 0x1014a0f0, 0x1014a120, 0x1014da70, 0x1014dc70
 * callees: 0x100d5710, 0x100d6d20, 0x1014e940, 0x1014ea20
 */

char __thiscall CDlgMgr::AddDialog(CDlgMgr *this, struct CTYDialog *a2)
{
  struct CTYDialog *v2; // edi
  struct CTYDialog *v3; // ebp
  char *v4; // esi
  struct CTYDialog *v5; // ebx
  struct GUISystem *v7; // eax
  CGUIWindow *v8; // eax
  char *v9; // [esp+10h] [ebp-14h] BYREF
  struct CTYDialog *v10; // [esp+14h] [ebp-10h]
  char v11[12]; // [esp+18h] [ebp-Ch] BYREF

  v2 = a2;
  v3 = (struct CTYDialog *)*((_DWORD *)a2 + 22);
  v4 = (char *)this + 8;
  a2 = v3;
  sub_1014E940(&v9, &a2);
  v5 = (struct CTYDialog *)*((_DWORD *)v4 + 1);
  if ( !v9 || v9 != v4 )
    invalid_parameter_noinfo();
  if ( v10 != v5 )
    return 0;
  v7 = GUISystem::Instance();
  v8 = (CGUIWindow *)(*(int (__thiscall **)(struct GUISystem *, struct CTYDialog *))(*(_DWORD *)v7 + 48))(v7, v2);
  if ( v8 )
    CGUIWindow::SetVisible(v8, 0);
  v9 = (char *)v3;
  v10 = v2;
  sub_1014EA20(v11, &v9);
  (*(void (__thiscall **)(struct CTYDialog *))(*(_DWORD *)v2 + 24))(v2);
  return 1;
}
