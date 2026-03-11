/*
 * func-name: sub_10036A90
 * func-address: 0x10036a90
 * callers: 0x1000423c
 * callees: 0x10001573
 */

int __thiscall sub_10036A90(_DWORD *this)
{
  GameClient::Robot *v2; // ecx
  int *v3; // esi
  int result; // eax
  char v5; // al
  int v6; // edx

  v2 = (GameClient::Robot *)this[76];
  v3 = (int *)*((_DWORD *)v2 + 57);
  if ( v3 || (GameClient::Robot::SetCurEquip(v2, 1, -1), result = this[76], (v3 = *(int **)(result + 228)) != 0) )
  {
    v5 = (*(int (__thiscall **)(int *))(*v3 + 168))(v3);
    v6 = *v3;
    if ( v5 )
      return (*(int (__thiscall **)(int *))(v6 + 132))(v3);
    else
      return (*(int (__thiscall **)(int *))(v6 + 128))(v3);
  }
  return result;
}
