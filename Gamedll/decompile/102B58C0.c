/*
 * func-name: ?HandleMessages@Game@@QAEJPAUHWND__@@IIJ@Z_0
 * func-address: 0x102b58c0
 * callers: 0x1000352b
 * callees: 0x1000d7dd, 0x10013796, 0x102bd7e0, 0x102bdb40
 */

LRESULT __thiscall Game::HandleMessages(GUIConsole **this, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  GUISystem *v6; // eax
  char v8; // [esp-2Ch] [ebp-58h] BYREF
  int v9; // [esp-28h] [ebp-54h]
  int v10; // [esp-24h] [ebp-50h]
  int v11; // [esp-20h] [ebp-4Ch]
  int v12; // [esp-1Ch] [ebp-48h]
  int v13; // [esp-18h] [ebp-44h]
  int v14; // [esp-14h] [ebp-40h]
  char v15; // [esp-10h] [ebp-3Ch] BYREF
  int v16; // [esp-Ch] [ebp-38h]
  int v17; // [esp-8h] [ebp-34h]
  int v18; // [esp-4h] [ebp-30h]
  UINT v19; // [esp+0h] [ebp-2Ch]
  WPARAM v20; // [esp+4h] [ebp-28h]
  LPARAM v21; // [esp+8h] [ebp-24h]
  HWND v22; // [esp+Ch] [ebp-20h]
  unsigned int v23; // [esp+10h] [ebp-1Ch]
  unsigned int v24; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]
  int v26; // [esp+28h] [ebp-4h]

  if ( RenderDevice::Instance(this) )
  {
    v21 = lParam;
    v20 = wParam;
    v19 = Msg;
    v6 = (GUISystem *)GUISystem::Instance(hWnd);
    GUISystem::MsgProc(v6, v22, v23, v24, v25);
  }
  if ( !*this )
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  std::string::string(&v15, &unk_10324DDF);
  v26 = 0;
  std::string::string(&v8, "EnableConsole");
  v26 = -1;
  if ( (unsigned __int8)sub_102BD7E0(v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21) )
  {
    std::string::string(&v15, &unk_10324DEF);
    v26 = 1;
    std::string::string(&v8, "EnableConsole");
    v26 = -1;
    if ( (unsigned __int8)sub_102BDB40(v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21) )
    {
      if ( Msg == 256 )
      {
        GUIConsole::MsgKeyDown(this[26], wParam);
      }
      else if ( Msg == 258 )
      {
        GUIConsole::MsgChar(this[26], wParam);
      }
    }
  }
  return Engine::HandleMessages(*this, hWnd, Msg, wParam, lParam);
}
