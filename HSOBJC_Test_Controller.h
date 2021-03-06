// ================================================================
// Copyright (C) 2010 Tim Scheffler
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ================================================================

#import <Cocoa/Cocoa.h>
#import "HSObjC_C.h"


@interface HSOBJC_Test_Controller : NSObject {
    
    IBOutlet NSTextField *stableId_inputTextField;
    IBOutlet NSTextField *stableID_outputTextField;    
    IBOutlet NSButton *stableId_retrieveButton;
    
    IBOutlet NSTextField *string_inputTextField;
    IBOutlet NSTextField *string_outputTextField;
    
    IBOutlet NSSlider *numberSlider;
    IBOutlet NSTextField *number_doubleValue;
    IBOutlet NSTextField *number_integerValue;
    
    IBOutlet NSTextField *array_stringResults;
    
    IBOutlet NSTextField *storeArray_stringResults;
    IBOutlet NSButton *storeArray_retrieveButton;
    IBOutlet NSTextField *storeArray_inputTextField;
    
    IBOutlet NSButton *haskellTargetButton;
    
    HSValue *controller;
}

- (NSDictionary*)ivarDictionary;
- (IBAction)arrayInput:(id)sender;
- (IBAction)constellation:(id)sender;

@end
