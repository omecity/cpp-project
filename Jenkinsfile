pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/omecity/cpp-project.git'
            }
        }

        stage('Install Dependencies') {
            steps {
                sh 'sudo apt-get update && sudo apt-get install -y g++ cmake libgtest-dev make'
            }
        }

        stage('Build') {
            steps {
                sh 'make' 
            }
        }

        stage('Run') {
            steps {
                sh './main'         // Run the compiled program
            }
        }

        stage('Test') {
            steps {
                sh './test'         // Run unit tests
            }
        }

        stage('Cleanup') {
            steps {
                sh 'make clean'
            }
        }
    }

    post {
        success {
            echo 'Build, execution, and tests successful!'
        }
        failure {
            echo 'Build or tests failed. Check logs!'
        }
        failure {
                emailext subject: "Build Failed", 
                body: "Tests failed in Jenkins. Check logs.", 
                to: 'olumoyeo@msu.edu'
        }
    }
}
