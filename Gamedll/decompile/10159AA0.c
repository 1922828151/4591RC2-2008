/*
 * func-name: ?LoadHUD@Equip@GameClient@@QAEXXZ_0
 * func-address: 0x10159aa0
 * callers: 0x10007f59
 * callees: 0x10001d34, 0x1001135b, 0x102c9d98
 */

void __thiscall GameClient::Equip::LoadHUD(GameClient::Equip *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-20h]
  int v9; // [esp+4h] [ebp-1Ch]

  v2 = *((_DWORD *)this + 2);
  if ( !*((_DWORD *)this + 44) )
  {
    if ( operator new(0x16Cu) )
      v3 = sub_10001D34(v8, v9);
    else
      v3 = 0;
    *((_DWORD *)this + 44) = v3;
    sub_1001135B(v2 + 540, v2 + 568, v2 + 596);
  }
  if ( *(_DWORD *)(v2 + 1704) && !*((_DWORD *)this + 99) )
  {
    v4 = AudioDevice::Instance();
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *((_DWORD *)this + 99) = v5;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 1704) + 12))(*(_DWORD *)(v2 + 1704), v5);
  }
  if ( *(_DWORD *)(v2 + 1864) )
  {
    if ( !*((_DWORD *)this + 139) )
    {
      v6 = AudioDevice::Instance();
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
      *((_DWORD *)this + 139) = v7;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 1864) + 12))(*(_DWORD *)(v2 + 1864), v7);
    }
  }
}
