/*
 * func-name: sub_102A5D00
 * func-address: 0x102a5d00
 * callers: 0x1001945c
 * callees: 0x1000194c, 0x100072cf, 0x1000a3a8, 0x1000ed13, 0x10011a4f, 0x102c9d62, 0x102c9ea8, 0x102c9fe0
 */

int __thiscall sub_102A5D00(int this, float a2)
{
  int v3; // edi
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *v5; // eax
  size_t v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // ecx
  double v10; // st7
  unsigned int v11; // eax
  int v12; // edi
  double v13; // st7
  double v14; // st6
  double v15; // st7
  bool v16; // zf
  signed int v17; // ecx
  double v18; // rt1
  int *v19; // eax
  int v20; // ecx
  int v21; // edx
  int *v22; // eax
  int v23; // ecx
  int v24; // edx
  CDlgMgr *v26; // eax
  GameClient::RobotManager *v27; // eax
  struct GameClient::Robot *Robot; // edi
  CDlgMgr *v29; // eax
  struct CTYDialog *Dialog; // eax
  CTYDialog *v31; // esi
  int v32; // [esp-4h] [ebp-1B8h]
  int v33; // [esp+Ch] [ebp-1A8h]
  int v34; // [esp+Ch] [ebp-1A8h]
  float v35; // [esp+18h] [ebp-19Ch]
  float v36; // [esp+18h] [ebp-19Ch]
  float v37; // [esp+18h] [ebp-19Ch]
  float v38; // [esp+18h] [ebp-19Ch]
  float v39; // [esp+1Ch] [ebp-198h]
  wchar_t Buffer[200]; // [esp+20h] [ebp-194h] BYREF

  v3 = sub_1000194C(0);
  if ( v3
    && (v33 = *(_DWORD *)(v3 + 292),
        v4 = GameClient::RobotManager::Instance(),
        (v5 = GameClient::RobotManager::GetRobot(v4, v33)) != 0)
    && *((float *)v5 + 100) > 0.00009999999747378752
    && *((_DWORD *)v5 + 90) )
  {
    v34 = (int)*((float *)v5 + 100);
    v6 = std::wstring::c_str(this + 4012);
    sub_10011A4F(Buffer, v6, v34);
    CREStatic::SetText(*(CREStatic **)(this + 3872), Buffer);
    v7 = *(float *)&GSeconds - *(float *)(this + 3992);
    v35 = v7 + v7;
    v8 = (int)v35;
    v9 = v8;
    v10 = v35 - (double)v8;
    v11 = ((int)(((unsigned __int64)(1431655765LL * v8) >> 32) - v8) >> 1)
        + ((unsigned int)(((unsigned __int64)(1431655765LL * v8) >> 32) - v8) >> 31);
    v12 = v11 + (int)v35 + 2 * v11;
    v36 = v10;
    v13 = v36;
    v37 = 1.0 - v36;
    *(float *)(*(_DWORD *)(this + 4 * v12 + 3892) + 528) = v37;
    v14 = v13;
    v15 = v37;
    *(float *)(*(_DWORD *)(this + 4 * ((v12 + 2) % 3) + 3892) + 528) = v14;
    v17 = v9 & 0x80000001;
    v16 = v17 == 0;
    *(float *)(*(_DWORD *)(this + 4 * ((v12 + 1) % 3) + 3892) + 528) = 1.0;
    if ( v17 < 0 )
      v16 = (((_BYTE)v17 - 1) | 0xFFFFFFFE) == -1;
    if ( v16 )
    {
      v18 = v14;
      v14 = v37;
      v15 = v18;
    }
    v19 = (int *)(this + 3904);
    v20 = 5;
    do
    {
      v21 = *v19;
      v19 += 2;
      v39 = v14;
      *(float *)(v21 + 528) = v39;
      --v20;
    }
    while ( v20 );
    v22 = (int *)(this + 3908);
    v23 = 5;
    do
    {
      v24 = *v22;
      v22 += 2;
      v38 = v15;
      *(float *)(v24 + 528) = v38;
      --v23;
    }
    while ( v23 );
    CTYDialog::CenterDialog((CTYDialog *)this, 1, 1);
    return CTYDialog::OnRender((CTYDialog *)this, a2);
  }
  else
  {
    v26 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v26);
    v32 = *(_DWORD *)(v3 + 292);
    v27 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v27, v32);
    v29 = (CDlgMgr *)CDlgMgr::Instance();
    Dialog = CDlgMgr::GetDialog(v29);
    v31 = (CTYDialog *)_RTDynamicCast(Dialog, 24, 0, 0);
    if ( v31 && *((_DWORD *)Robot + 90) )
    {
      CRadarMapUI::ChangeMapState(2);
      CTYDialog::SetHasInput(v31, 1);
    }
    return 0;
  }
}
