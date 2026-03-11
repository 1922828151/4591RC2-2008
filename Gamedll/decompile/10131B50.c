/*
 * func-name: ?PostRender@HookEsbSheild@@UAEXPAVCamera@@@Z_0
 * func-address: 0x10131b50
 * callers: 0x1001300c
 * callees: 0x10014669, 0x100146be, 0x102c0750
 */

void __thiscall HookEsbSheild::PostRender(HookEsbSheild *this, struct Camera *a2)
{
  Editor *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int *v11; // edi
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [esp+24h] [ebp-A8h]
  int v18; // [esp+28h] [ebp-A4h]
  float v19; // [esp+34h] [ebp-98h]
  float v20; // [esp+34h] [ebp-98h]
  float v21; // [esp+38h] [ebp-94h]
  float v22; // [esp+38h] [ebp-94h]
  float v23; // [esp+3Ch] [ebp-90h]
  float v24; // [esp+3Ch] [ebp-90h]
  float v25[3]; // [esp+40h] [ebp-8Ch] BYREF
  float v26[3]; // [esp+4Ch] [ebp-80h] BYREF
  _BYTE v27[40]; // [esp+58h] [ebp-74h] BYREF
  _BYTE v28[64]; // [esp+80h] [ebp-4Ch] BYREF
  int v29; // [esp+C8h] [ebp-4h]

  v3 = (Editor *)Editor::Instance(v17, v18);
  if ( Editor::GetEditorMode(v3) )
  {
    v4 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 92))(v4);
    if ( *((_DWORD *)this + 285) )
    {
      v5 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v5 + 96))(
        v5,
        (char *)this + 856,
        *((_DWORD *)this + 285) + 856,
        -16776961);
    }
    if ( *((_DWORD *)this + 300) )
    {
      v6 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, int, int))(*(_DWORD *)v6 + 96))(
        v6,
        (char *)this + 856,
        *((_DWORD *)this + 300) + 856,
        -16711936);
    }
    v7 = Canvas::Instance();
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 100))(v7);
    v8 = *((_DWORD *)this + 301);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = Canvas::Instance();
          v21 = *((float *)this + 214) + *((float *)this + 304);
          v11 = (int *)v10;
          v19 = *((float *)this + 305) + *((float *)this + 215);
          v23 = *((float *)this + 306) + *((float *)this + 216);
          v25[0] = v21;
          v25[1] = v19;
          v25[2] = v23;
          v24 = *((float *)this + 214) - *((float *)this + 304);
          v20 = *((float *)this + 215) - *((float *)this + 305);
          v22 = *((float *)this + 216) - *((float *)this + 306);
          v26[0] = v24;
          v26[1] = v20;
          v26[2] = v22;
          v12 = sub_100146BE((int)v26, (int)v25);
          v13 = *v11;
          v29 = 0;
          v14 = sub_10014669(v28);
          (*(void (__thiscall **)(int *, int, int, int))(v13 + 136))(v11, v12, v14, -1);
          v29 = -1;
          sub_102C0750(v27);
        }
      }
      else
      {
        v15 = Canvas::Instance();
        (*(void (__thiscall **)(int, char *, _DWORD, _DWORD, int))(*(_DWORD *)v15 + 144))(
          v15,
          (char *)this + 856,
          *((float *)this + 302),
          *((float *)this + 303),
          -1);
      }
    }
    else
    {
      v16 = Canvas::Instance();
      (*(void (__thiscall **)(int, char *, _DWORD, int))(*(_DWORD *)v16 + 140))(
        v16,
        (char *)this + 856,
        *((float *)this + 302),
        -1);
    }
  }
}
