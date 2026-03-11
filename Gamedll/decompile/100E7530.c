/*
 * func-name: ?UpdateInput@SamplePlayer@@UAEXXZ_0
 * func-address: 0x100e7530
 * callers: 0x1000196f
 * callees: 0x100029cd, 0x10006a32, 0x10012a8f, 0x10019a79, 0x102c1be0, 0x102c26d0
 */

void __thiscall SamplePlayer::UpdateInput(SamplePlayer *this)
{
  Input *v2; // eax
  bool v3; // cl
  Input *v4; // eax
  Model *v5; // ecx
  SampleWeapon *v6; // ecx
  Input *v7; // eax
  SampleWeapon *v8; // ecx
  Input *v9; // eax
  SampleWeapon *v10; // ecx
  Input *v11; // eax
  SampleWeapon *v12; // ecx
  Input *v13; // eax
  Input *v14; // eax
  Input *v15; // eax
  Input *v16; // eax
  SampleWeapon *v17; // ecx
  Input *v18; // eax
  int v19; // eax
  double v20; // st7
  float v21; // [esp+B4h] [ebp-38h]
  float v22; // [esp+B8h] [ebp-34h]
  float v23; // [esp+C4h] [ebp-28h]
  float v24; // [esp+C4h] [ebp-28h]
  float v25; // [esp+C8h] [ebp-24h]
  float v26; // [esp+D0h] [ebp-1Ch]
  float v27; // [esp+E0h] [ebp-Ch] BYREF
  float v28; // [esp+E4h] [ebp-8h]
  float v29; // [esp+E8h] [ebp-4h]
  float retaddr; // [esp+ECh] [ebp+0h] BYREF

  if ( *((_DWORD *)this + 179) )
  {
    v2 = (Input *)Input::Instance(*((_DWORD *)this + 277));
    if ( Input::ControlJustPressed(v2) )
    {
      v3 = *((_BYTE *)this + 1064) != 0;
      *((_BYTE *)this + 1064) = *((_BYTE *)this + 1064) == 0;
      *((_BYTE *)this + 816) = v3;
    }
    v4 = (Input *)Input::Instance(*((_DWORD *)this + 272));
    if ( Input::ControlDown(v4) )
    {
      v5 = (Model *)*((_DWORD *)this + 179);
      if ( *((_BYTE *)this + 1065) )
      {
        if ( !Model::IsPlaying(v5, *((_DWORD *)this + 291)) )
        {
          LODWORD(v26) = -*((_DWORD *)this + 267);
          retaddr = 0.0;
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 288), 0.2, -1.0, 0.0, 1.0);
      }
      else
      {
        if ( !Model::IsPlaying(v5, *((_DWORD *)this + 291)) )
        {
          LODWORD(v26) = -*((_DWORD *)this + 267);
          retaddr = 0.0;
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 283), 0.2, -1.0, 0.0, 1.0);
      }
      v6 = (SampleWeapon *)*((_DWORD *)this + 269);
      if ( v6 )
        SampleWeapon::PlayWalkAnimation(v6);
    }
    v7 = (Input *)Input::Instance(*((_DWORD *)this + 273));
    if ( Input::ControlDown(v7) )
    {
      if ( *((_BYTE *)this + 1065) )
      {
        if ( !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 291)) )
        {
          LODWORD(v26) = -*((_DWORD *)this + 267);
          v27 = (double)SLODWORD(v26) / 5.0;
          v28 = 0.0;
          retaddr = v27;
          v29 = 0.0;
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 289), 0.2, -1.0, 0.0, 1.0);
      }
      else
      {
        if ( !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 291)) )
        {
          LODWORD(v26) = -*((_DWORD *)this + 267);
          v27 = (float)SLODWORD(v26);
          retaddr = v27;
          v28 = 0.0;
          v29 = 0.0;
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 284), 0.2, -1.0, 0.0, 1.0);
      }
      v8 = (SampleWeapon *)*((_DWORD *)this + 269);
      if ( v8 )
        SampleWeapon::PlayWalkAnimation(v8);
    }
    v9 = (Input *)Input::Instance(*((_DWORD *)this + 274));
    if ( Input::ControlDown(v9) )
    {
      if ( *((_BYTE *)this + 1065) )
      {
        if ( !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 291)) )
        {
          v27 = (double)*((int *)this + 267) / 5.0;
          v28 = 0.0;
          retaddr = v27;
          v29 = 0.0;
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 290), 0.2, -1.0, 0.0, 1.0);
      }
      else
      {
        if ( !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 291)) )
        {
          v27 = (float)*((int *)this + 267);
          retaddr = v27;
          v28 = 0.0;
          v29 = 0.0;
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 285), 0.2, -1.0, 0.0, 1.0);
      }
      v10 = (SampleWeapon *)*((_DWORD *)this + 269);
      if ( v10 )
        SampleWeapon::PlayWalkAnimation(v10);
    }
    v11 = (Input *)Input::Instance(*((_DWORD *)this + 271));
    if ( Input::ControlDown(v11) )
    {
      if ( *((_BYTE *)this + 1065) )
      {
        if ( !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 291)) )
        {
          v27 = 0.0;
          v28 = 0.0;
          retaddr = 0.0;
          v29 = (double)*((int *)this + 267) / 2.5;
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 287), 0.2, -1.0, 0.0, 1.0);
      }
      else
      {
        if ( !Model::IsPlaying(*((Model **)this + 179), *((_DWORD *)this + 291)) )
        {
          v27 = 0.0;
          v28 = 0.0;
          v29 = (float)*((int *)this + 267);
          sub_100029CD();
          v27 = 0.0;
          v28 = 0.0;
          v29 = 0.0;
          sub_102C1BE0(&retaddr, &v27);
          retaddr = v27 * 4.0;
        }
        Model::TransitionToAnimation(*((Model **)this + 179), *((_DWORD *)this + 282), 0.2, -1.0, 0.0, 1.0);
      }
      v12 = (SampleWeapon *)*((_DWORD *)this + 269);
      if ( v12 )
        SampleWeapon::PlayWalkAnimation(v12);
    }
    v13 = (Input *)Input::Instance(*((_DWORD *)this + 275));
    if ( Input::ControlJustPressed(v13) )
      *((_BYTE *)this + 1065) = *((_BYTE *)this + 1065) == 0;
    v14 = (Input *)Input::Instance(*((_DWORD *)this + 276));
    if ( Input::ControlJustPressed(v14) )
      SamplePlayer::OnJump(this);
    v15 = (Input *)Input::Instance(*((_DWORD *)this + 278));
    if ( Input::ControlJustPressed(v15) )
      *((_BYTE *)this + 1066) = *((_BYTE *)this + 1066) == 0;
    v16 = (Input *)Input::Instance(*((_DWORD *)this + 279));
    if ( Input::ControlDown(v16) )
    {
      v17 = (SampleWeapon *)*((_DWORD *)this + 269);
      if ( v17 )
        SampleWeapon::OnUse(v17);
    }
    v18 = (Input *)Input::Instance(*((_DWORD *)this + 280));
    Input::ControlDown(v18);
    v19 = *((_DWORD *)this + 184);
    *((float *)this + 211) = v25;
    *((float *)this + 213) = v26;
    if ( v19 == 2 )
    {
      v20 = 4.0;
    }
    else if ( v19 == 3 )
    {
      v20 = 2.0;
    }
    else
    {
      v20 = 0.0;
    }
    *((float *)this + 212) = v20;
    v23 = *(float *)(Input::Instance(0.0) + 1712) / 100.0;
    v24 = *(float *)(Input::Instance(LODWORD(v23)) + 1716) / 100.0;
    sub_102C26D0(v24, v21, v22);
  }
}
