//
//  ViewController.h
//  I Want Coffee
//
//  Created by Adam on 2015-09-24.
//  Copyright © 2015 Adam Boyd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "EAIntroView.h"
#import "IWCDataController.h"
#import "IWCMapAnnotation.h"
#import "IWCShopDetailViewController.h"

@interface ViewController : UIViewController <EAIntroDelegate, IWCLocationListenerDelegate, MKMapViewDelegate> {
    MKMapView *mapView;
    UIView *navBar;
}

@property(nonatomic, retain) MKMapView *mapView;
@property(nonatomic, retain) UIView *navBar;

@end

