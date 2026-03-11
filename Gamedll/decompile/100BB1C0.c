/*
 * func-name: ?SetMaxParticles@PhysicsParticles@@UAEXH@Z_0
 * func-address: 0x100bb1c0
 * callers: 0x10012fe9
 * callees: 0x1000ab32, 0x10014966
 */

void __userpurge PhysicsParticles::SetMaxParticles(PhysicsParticles *this@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int v5; // eax
  Editor *v6; // eax
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // [esp+38h] [ebp+4h]
  int i; // [esp+40h] [ebp+Ch]

  if ( *((_DWORD *)this + 54) != a4 )
  {
    PhysicsParticles::DestroyPhysics(this);
    *((_DWORD *)this + 54) = a4;
    sub_10014966((char *)this + 188, a4);
    v5 = *((_DWORD *)this + 54) - 1;
    if ( *((_DWORD *)this + 51) > v5 )
      *((_DWORD *)this + 51) = v5;
    v6 = (Editor *)Editor::Instance(a3, a2);
    Editor::GetEditorMode(v6);
    v7 = *((_DWORD *)this + 51);
    if ( (signed int)v7 < *((_DWORD *)this + 54) )
    {
      v8 = 96 * v7;
      for ( i = 96 * v7; ; v8 = i )
      {
        v9 = *((_DWORD *)this + 48);
        if ( !v9 || v7 >= (*((_DWORD *)this + 49) - v9) / 96 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(PhysicsParticles *, int))(*(_DWORD *)this + 24))(this, v8 + *((_DWORD *)this + 48));
        v10 = *((_DWORD *)this + 48);
        if ( !v10 || v7 >= (*((_DWORD *)this + 49) - v10) / 96 )
          _invalid_parameter_noinfo();
        v13 = v8 + *((_DWORD *)this + 48);
        v11 = *((_DWORD *)this + 48);
        if ( !v11 || v7 >= (*((_DWORD *)this + 49) - v11) / 96 )
          _invalid_parameter_noinfo();
        v12 = i + *((_DWORD *)this + 48);
        i += 96;
        ++v7;
        *(float *)(v12 + 52) = (double)rand() / 32767.0 * *(float *)(v13 + 52);
        if ( (signed int)v7 >= *((_DWORD *)this + 54) )
          break;
      }
    }
    (*(void (__thiscall **)(PhysicsParticles *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 52))(
      this,
      *((_DWORD *)this + 54),
      *((unsigned __int8 *)this + 356),
      *((float *)this + 95),
      *((float *)this + 92),
      *((_DWORD *)this + 94),
      *((_DWORD *)this + 90));
  }
}
