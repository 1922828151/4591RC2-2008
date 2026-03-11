/*
 * func-name: ?PostRender@HookEsbProduce@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1012cf80
 * callers: 0x1000d620
 * callees: none
 */

// positive sp value has been detected, the output may be wrong!
void __thiscall HookEsbProduce::PostRender(HookEsbProduce *this, struct Camera *a2)
{
  Editor *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp+2Ch] [ebp-Ch]
  int v11; // [esp+30h] [ebp-8h]

  v3 = (Editor *)Editor::Instance(v10, v11);
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
    if ( *((_DWORD *)this + 314) )
    {
      v7 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v7 + 96))(
        v7,
        (char *)this + 856,
        *((_DWORD *)this + 314) + 856,
        -65536);
    }
    v8 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 100))(v8);
    v9 = Canvas::Instance();
    (*(void (__thiscall **)(int, char *, _DWORD, _DWORD, int))(*(_DWORD *)v9 + 144))(
      v9,
      (char *)this + 856,
      *((float *)this + 315),
      *((float *)this + 316),
      -1);
  }
}
