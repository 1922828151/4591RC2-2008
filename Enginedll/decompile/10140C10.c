/*
 * func-name: ?UpdateScene@NxPhysics@@QAEX_N@Z
 * func-address: 0x10140c10
 * callers: 0x10144910
 * callees: 0x1007ec70
 */

void __thiscall NxPhysics::UpdateScene(NxPhysics *this, bool a2)
{
  _DWORD *v3; // eax
  double v4; // st7
  int v5; // edi
  float v6; // [esp+18h] [ebp+4h]
  float v7; // [esp+18h] [ebp+4h]

  if ( *((_DWORD *)this + 3) && (a2 || !*(_BYTE *)this && GDeltaTime > 0.0) )
  {
    v3 = (_DWORD *)*((_DWORD *)this + 4);
    if ( v3 )
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v3 + 20))(*v3);
    v6 = GDeltaTime;
    v4 = GDeltaTime;
    if ( GDeltaTime <= 0.2000000029802322 )
    {
      if ( v4 < 0.0099999998 )
      {
        Sleep((__int64)((0.01 - v4) * 1000.0));
        v6 = 0.0099999998;
      }
    }
    else
    {
      v6 = 0.2;
    }
    if ( *((_BYTE *)Editor::Instance() + 2056) )
    {
      v5 = **((_DWORD **)this + 3);
      v7 = *((float *)Editor::Instance() + 531) * v6;
      (*(void (__thiscall **)(_DWORD, _DWORD))(v5 + 560))(*((_DWORD *)this + 3), LODWORD(v7));
    }
    else
    {
      (*(void (__stdcall **)(float))(**((_DWORD **)this + 3) + 560))(COERCE_FLOAT(LODWORD(v6)));
    }
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 324))(*((_DWORD *)this + 3));
    *(_BYTE *)this = 1;
  }
}
