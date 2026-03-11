/*
 * func-name: ?HasAnyGUIopen@Game@@QAE_NXZ_0
 * func-address: 0x102b6420
 * callers: 0x10013d13
 * callees: 0x10006384
 */

BOOL __thiscall Game::HasAnyGUIopen(Game *this)
{
  Editor *v2; // eax
  int v3; // eax
  Editor *v4; // eax
  Editor *v5; // eax
  BOOL result; // eax
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]
  int v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+4h] [ebp-8h]

  v2 = (Editor *)Editor::Instance(v7, v10);
  if ( !Editor::GetEditorMode(v2) )
  {
    v3 = CDlgMgr::Instance();
    Game::SetCursorVisible(this, *(_BYTE *)(v3 + 128));
  }
  v4 = (Editor *)Editor::Instance(v8, v11);
  result = Editor::GetEditorMode(v4) && (v5 = (Editor *)Editor::Instance(v9, v12), Editor::IsCursorVisible(v5))
        || *(_BYTE *)(CDlgMgr::Instance() + 128);
  return result;
}
