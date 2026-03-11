/*
 * func-name: ?PostRender@HookEsbAirDrop@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1012db90
 * callers: 0x10016e69
 * callees: 0x102c0ed0
 */

void __thiscall HookEsbAirDrop::PostRender(HookEsbAirDrop *this, struct Camera *a2)
{
  Editor *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  float *v9; // eax
  int v10; // eax
  int v11; // eax
  float *v12; // [esp+4h] [ebp-44h]
  int v13; // [esp+18h] [ebp-30h]
  int v14; // [esp+1Ch] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-2Ch]
  float v16; // [esp+1Ch] [ebp-2Ch]
  float v17; // [esp+20h] [ebp-28h]
  float v18; // [esp+24h] [ebp-24h]
  float v19; // [esp+28h] [ebp-20h]
  float v20; // [esp+2Ch] [ebp-1Ch]
  float v21[3]; // [esp+30h] [ebp-18h] BYREF
  _BYTE v22[12]; // [esp+3Ch] [ebp-Ch] BYREF

  v3 = (Editor *)Editor::Instance(v13, v14);
  if ( Editor::GetEditorMode(v3) )
  {
    if ( *((_DWORD *)this + 285) )
    {
      v4 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v4 + 144))(
        v4,
        *((_DWORD *)this + 301) + 856,
        *((float *)this + 300),
        0.1,
        -16711936);
    }
    v5 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 92))(v5);
    if ( *((_DWORD *)this + 285) )
    {
      v6 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v6 + 96))(
        v6,
        (char *)this + 856,
        *((_DWORD *)this + 285) + 856,
        -16776961);
      v7 = Canvas::Instance();
      v15 = *((float *)this + 300);
      v8 = v7;
      v9 = (float *)sub_102C0ED0(v22);
      v18 = *v9 * v15;
      v19 = v9[1] * v15;
      v12 = (float *)(*((_DWORD *)this + 301) + 856);
      v20 = v15 * v9[2];
      v16 = *(float *)(*((_DWORD *)this + 301) + 860) + v19;
      v17 = *(float *)(*((_DWORD *)this + 301) + 864) + v20;
      v21[0] = v18 + *v12;
      v21[1] = v16;
      v21[2] = v17;
      (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v8 + 96))(v8, v12, v21, -16711936);
    }
    if ( *((_DWORD *)this + 301) )
    {
      v10 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v10 + 96))(
        v10,
        (char *)this + 856,
        *((_DWORD *)this + 301) + 856,
        -1);
    }
    v11 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 100))(v11);
  }
}
