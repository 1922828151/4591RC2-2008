/*
 * func-name: ?OnBuffAdded@CStatusUI@@QAEXKK@Z_0
 * func-address: 0x1028f6c0
 * callers: 0x1000313e
 * callees: 0x100077e3, 0x1000886e, 0x1000aff6, 0x10012c29, 0x10016937, 0x1001a0f5, 0x102c7190, 0x102c9d98
 */

void __thiscall CStatusUI::OnBuffAdded(CStatusUI *this, unsigned int a2, struct tagRECT *a3)
{
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  struct GameClient::Flyweight *v6; // ebx
  CPictureLabel *v7; // eax
  struct CREControl *v8; // esi
  void (__thiscall *v9)(struct CREControl *, int, int); // eax
  _DWORD v10[7]; // [esp-4h] [ebp-54h] BYREF
  struct tagRECT *p_rc; // [esp+18h] [ebp-38h]
  int v12[2]; // [esp+2Ch] [ebp-24h] BYREF
  struct tagRECT rc; // [esp+34h] [ebp-1Ch] BYREF
  int v14; // [esp+4Ch] [ebp-4h]

  p_rc = a3;
  v4 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v4, (unsigned int)p_rc);
  v6 = Flyweight;
  if ( Flyweight && *((_DWORD *)Flyweight + 48) )
  {
    v7 = (CPictureLabel *)operator new(0x40Cu);
    v8 = v7;
    v12[0] = (int)v7;
    v14 = 0;
    if ( v7 )
    {
      CPictureLabel::CPictureLabel(v7, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
      *(_DWORD *)v8 = &CPictureLabel::`vftable';
    }
    else
    {
      v8 = 0;
    }
    v9 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v8 + 160);
    v14 = -1;
    v12[0] = (int)v8;
    v9(v8, 23, 23);
    SetRect(&rc, 0, 0, 23, 23);
    p_rc = &rc;
    v12[1] = (int)v10;
    sub_102C7190(v10, (char *)v6 + 172);
    CPictureLabel::ChangeTexture(v8, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], p_rc);
    CREDialog::AddControl(this, v8);
    sub_10016937((char *)this + 3952, (int)v12);
    sub_1001A0F5((char *)this + 3968, (int)&a3);
    sub_100077E3((char *)this + 3984, GSeconds);
    CStatusUI::RelocateBuffIcon(this);
  }
}
