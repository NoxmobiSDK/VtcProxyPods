#
#  Be sure to run `pod spec lint NoxPayBeta.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "NoxVtcProxy"
  spec.version      = "1.0"
  spec.summary      = "A vtc proxy provided Nox."
  spec.homepage     = "https://github.com/NoxmobiSDK/VtcProxyPods"
  spec.license      = "MIT"
  spec.author       = { "gaochong" => "gaochong@noxgroup.com" }
  spec.platform     = :ios, "10.0"
  spec.source       = { :git => "https://github.com/NoxmobiSDK/VtcProxyPods.git", :tag => "#{spec.version}" }
  spec.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  spec.requires_arc = true

  spec.subspec 'Etc' do |ss|
    ss.source_files = "SDKGameChanneling.framework/Headers/*.{h}"
    ss.ios.vendored_frameworks = 'SDKGameChanneling.framework'
  end

end
