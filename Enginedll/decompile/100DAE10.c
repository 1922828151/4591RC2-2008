/*
 * func-name: ?Update@Input@@UAEXXZ
 * func-address: 0x100dae10
 * callers: none
 * callees: none
 */

void __thiscall Input::Update(Input *this)
{
  int v2; // eax
  int (__thiscall *v3)(Input *); // edx
  float v4; // [esp+4h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(Input *))(*(_DWORD *)this + 68))(this)
    && !*((_BYTE *)this + 20)
    && *((_DWORD *)this + 1454) == 1 )
  {
    v2 = (*(int (__thiscall **)(Input *))(*(_DWORD *)this + 100))(this);
    v3 = *(int (__thiscall **)(Input *))(*(_DWORD *)this + 104);
    *((float *)this + 428) = (double)v2 * 0.2000000029802322 + *((float *)this + 428);
    v4 = (double)v3(this) * ((double)(2 * (*((_BYTE *)this + 12) == 0) - 1) * 0.2000000029802322)
       + *((float *)this + 429);
    *((float *)this + 429) = v4;
    if ( v4 > 89.0 )
      *((float *)this + 429) = 89.0;
    if ( *((float *)this + 429) < -89.0 )
      *((float *)this + 429) = -89.0;
  }
}
