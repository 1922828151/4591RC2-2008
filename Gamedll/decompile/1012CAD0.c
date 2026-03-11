/*
 * func-name: ?PostRender@HookEstablishment@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1012cad0
 * callers: 0x1001157c
 * callees: 0x102c1be0, 0x102c23d0
 */

void __userpurge HookEstablishment::PostRender(HookEstablishment *this@<ecx>, struct Camera *a2, struct Camera *a3)
{
  Editor *v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+18h] [ebp-5Ch]
  int v10; // [esp+1Ch] [ebp-58h]
  float v11; // [esp+20h] [ebp-54h] BYREF
  float v12; // [esp+24h] [ebp-50h]
  float v13; // [esp+28h] [ebp-4Ch]
  float v14[3]; // [esp+2Ch] [ebp-48h] BYREF
  _BYTE v15[60]; // [esp+38h] [ebp-3Ch] BYREF

  v4 = (Editor *)Editor::Instance(v9, v10);
  if ( Editor::GetEditorMode(v4) )
  {
    v5 = Canvas::Instance();
    sub_102C23D0(v15);
    v11 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    sub_102C1BE0((char *)this + 1428, &v11);
    v14[0] = *((float *)this + 214) + v11;
    v14[1] = *((float *)this + 215) + v12;
    v14[2] = *((float *)this + 216) + v13;
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, int))(*(_DWORD *)v5 + 144))(
      v5,
      v14,
      *((float *)this + 355),
      *((float *)this + 356),
      -16776961);
    v6 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 92))(v6);
    if ( *((_DWORD *)this + 354) )
    {
      v7 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v7 + 96))(
        v7,
        (char *)this + 856,
        *((_DWORD *)this + 354) + 856,
        -65281);
    }
    v8 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 100))(v8);
    Actor::PostRender(this, a3);
  }
}
