/*
 * func-name: ?Tick@Effect_Base@@UAEXXZ_0
 * func-address: 0x1007ea70
 * callers: 0x100199a2
 * callees: none
 */

void __thiscall Effect_Base::Tick(Effect_Base *this)
{
  Editor *v2; // eax
  int v3; // eax
  int v4; // eax
  bool v5; // zf
  double v6; // st7
  double v7; // st7
  float v8; // [esp+4h] [ebp-4h]

  v2 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v2) )
    *((_BYTE *)this + 1132) = 1;
  v3 = *((_DWORD *)this + 263);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 1133) )
    {
      *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 214);
      v4 = v3 + 20;
      *(_DWORD *)(v4 + 4) = *((_DWORD *)this + 215);
      *(_DWORD *)(v4 + 8) = *((_DWORD *)this + 216);
      qmemcpy((void *)(*((_DWORD *)this + 263) + 44), (char *)this + 868, 0x40u);
    }
    *(_BYTE *)(*((_DWORD *)this + 263) + 112) = *((_BYTE *)this + 816);
    *(float *)(*((_DWORD *)this + 263) + 128) = *((float *)this + 68);
  }
  if ( *((_BYTE *)this + 1064) )
  {
    if ( *((float *)this + 282) > 0.0 )
    {
      v8 = *((float *)this + 281) + GDeltaTime;
      *((float *)this + 281) = v8;
      if ( *((float *)this + 282) <= (double)v8 )
      {
        (*(void (__thiscall **)(Effect_Base *, _DWORD))(*(_DWORD *)this + 124))(this, 0);
        v5 = *((_BYTE *)this + 1132) == 0;
        *((float *)this + 281) = 0.0;
        if ( !v5 )
          (*(void (__thiscall **)(Effect_Base *, int))(*(_DWORD *)this + 124))(this, 1);
      }
      if ( *((float *)this + 280) <= (double)*((float *)this + 281) )
      {
        v7 = *((float *)this + 282) - *((float *)this + 281);
        if ( *((float *)this + 279) <= v7 )
          v6 = 1.0;
        else
          v6 = v7 / *((float *)this + 279);
      }
      else
      {
        v6 = *((float *)this + 281) / *((float *)this + 280);
      }
      *((float *)this + 278) = v6;
    }
    Actor::Tick(this);
  }
}
