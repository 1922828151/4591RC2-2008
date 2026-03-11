/*
 * func-name: ?PostRender@HookEsbEnergy@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1012cd30
 * callers: 0x10015140
 * callees: none
 */

// positive sp value has been detected, the output may be wrong!
void __thiscall HookEsbEnergy::PostRender(HookEsbEnergy *this, struct Camera *a2)
{
  Editor *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+20h] [ebp-Ch]
  int v10; // [esp+24h] [ebp-8h]

  v3 = (Editor *)Editor::Instance(v9, v10);
  if ( Editor::GetEditorMode(v3) )
  {
    v4 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 92))(v4);
    if ( *((_DWORD *)this + 284) )
    {
      v5 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v5 + 96))(
        v5,
        (char *)this + 856,
        *((_DWORD *)this + 284) + 856,
        -16776961);
    }
    if ( *((_DWORD *)this + 299) )
    {
      v6 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v6 + 96))(
        v6,
        (char *)this + 856,
        *((_DWORD *)this + 299) + 856,
        -16711936);
    }
    v7 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 100))(v7);
    v8 = Canvas::Instance();
    (*(void (__thiscall **)(int, char *, _DWORD, _DWORD, int))(*(_DWORD *)v8 + 144))(
      v8,
      (char *)this + 856,
      *((float *)this + 300),
      *((float *)this + 301),
      -1);
  }
}
